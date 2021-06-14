// Copyright Verizon Media. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
package ai.vespa.feed.client;

import ai.vespa.feed.client.FeedClient.CircuitBreaker;
import ai.vespa.feed.client.FeedClient.RetryStrategy;

import java.io.IOException;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicLong;
import java.util.logging.Logger;

import static ai.vespa.feed.client.FeedClient.CircuitBreaker.State.CLOSED;
import static ai.vespa.feed.client.FeedClient.CircuitBreaker.State.HALF_OPEN;
import static ai.vespa.feed.client.FeedClient.CircuitBreaker.State.OPEN;
import static java.lang.Math.max;
import static java.lang.Math.min;
import static java.nio.charset.StandardCharsets.UTF_8;
import static java.util.logging.Level.FINE;
import static java.util.logging.Level.WARNING;

// TODO: update doc
/**
 * Controls request execution and retries:
 * <ul>
 *     <li>Whenever throttled (429, 503), set target inflight to 0.9 * current, and retry over a different connection;</li>
 *     <li>retry other transient errors (500, 502 and IOException) a specified number of times, for specified operation types;</li>
 *     <li>and on every successful response, increase target inflight by 0.1.</li>
 * </ul>
 *
 * @author jonmv
 */
class HttpRequestStrategy implements RequestStrategy {

    private static final Logger log = Logger.getLogger(HttpRequestStrategy.class.getName());

    private final Cluster cluster;
    private final Map<DocumentId, CompletableFuture<?>> inflightById = new ConcurrentHashMap<>();
    private final RetryStrategy strategy;
    private final CircuitBreaker breaker;
    private final Queue<Runnable> queue = new ConcurrentLinkedQueue<>();
    private final long maxInflight;
    private final long minInflight;
    private final AtomicLong targetInflightX10; // 10x target, so we can increment one every tenth success.
    private final AtomicLong inflight = new AtomicLong(0);
    private final AtomicBoolean destroyed = new AtomicBoolean(false);
    private final AtomicLong delayedCount = new AtomicLong(0);
    private final AtomicLong retries = new AtomicLong(0);
    private final ExecutorService resultExecutor = Executors.newSingleThreadExecutor(runnable -> {
        Thread thread = new Thread(runnable, "feed-client-result-executor");
        thread.setDaemon(true);
        return thread;
    });

    HttpRequestStrategy(FeedClientBuilder builder) throws IOException {
        this(builder, new ApacheCluster(builder));
    }

    HttpRequestStrategy(FeedClientBuilder builder, Cluster cluster) {
        this.cluster = builder.benchmark ? new BenchmarkingCluster(cluster) : cluster;
        this.strategy = builder.retryStrategy;
        this.breaker = builder.circuitBreaker;
        this.maxInflight = builder.connectionsPerEndpoint * (long) builder.maxStreamsPerConnection;
        this.minInflight = builder.connectionsPerEndpoint * (long) min(16, builder.maxStreamsPerConnection);
        this.targetInflightX10 = new AtomicLong(10 * (long) (Math.sqrt(minInflight) * Math.sqrt(maxInflight)));

        Thread dispatcher = new Thread(this::dispatch, "feed-client-dispatcher");
        dispatcher.setDaemon(true);
        dispatcher.start();
    }

    @Override
    public OperationStats stats() {
        return cluster.stats();
    }

    @Override
    public CircuitBreaker.State circuitBreakerState() {
        return breaker.state();
    }

    private void dispatch() {
        try {
            while (breaker.state() != OPEN && ! destroyed.get()) {
                while ( ! isInExcess() && poll() && breaker.state() == CLOSED);
                // Sleep when circuit is half-open, nap when queue is empty, or we are throttled.
                Thread.sleep(breaker.state() == HALF_OPEN ? 1000 : 10); // TODO: Reduce throughput when turning half-open?
            }
        }
        catch (InterruptedException e) {
            Thread.currentThread().interrupt();
            log.log(WARNING, "Dispatch thread interrupted; shutting down");
        }
        destroy();
    }

    private void offer(Runnable task) {
        delayedCount.incrementAndGet();
        queue.offer(task);
    }

    private boolean poll() {
        Runnable task = queue.poll();
        if (task == null) return false;
        delayedCount.decrementAndGet();
        task.run();
        return true;
    }

    private boolean isInExcess() {
        return inflight.get() - delayedCount.get() > targetInflight();
    }

    private boolean retry(HttpRequest request, int attempt) {
        if (attempt > strategy.retries())
            return false;

        switch (request.method().toUpperCase()) {
            case "POST":   return strategy.retry(FeedClient.OperationType.PUT);
            case "PUT":    return strategy.retry(FeedClient.OperationType.UPDATE);
            case "DELETE": return strategy.retry(FeedClient.OperationType.REMOVE);
            default: throw new IllegalStateException("Unexpected HTTP method: " + request.method());
        }
    }

    /**
     * Retries all IOExceptions, unless error rate has converged to a value higher than the threshold,
     * or the user has turned off retries for this type of operation.
     */
    private boolean retry(HttpRequest request, Throwable thrown, int attempt) {
        breaker.failure();
        log.log(FINE, thrown, () -> "Failed attempt " + attempt + " at " + request);

        if ( ! (thrown instanceof IOException))
            return false;

        return retry(request, attempt);
    }

    private void incrementTargetInflight() {
        targetInflightX10.incrementAndGet();
    }

    private void decreaseTargetInflight() {
        targetInflightX10.set(max((inflight.get() - delayedCount.get()) * 9, minInflight * 10));
    }

    private long targetInflight() {
        return min(targetInflightX10.get() / 10, maxInflight);
    }

    /** Retries throttled requests (429, 503), adjusting the target inflight count, and server errors (500, 502). */
    private boolean retry(HttpRequest request, HttpResponse response, int attempt) {
        if (response.code() / 100 == 2) {
            breaker.success();
            incrementTargetInflight();
            return false;
        }

        log.log(FINE, () -> "Status code " + response.code() + " (" + new String(response.body(), UTF_8) +
                            ") on attempt " + attempt + " at " + request);

        if (response.code() == 429 || response.code() == 503) { // Throttling; reduce target inflight.
            decreaseTargetInflight();
            return true;
        }

        breaker.failure();
        if (response.code() == 500 || response.code() == 502 || response.code() == 504) // Hopefully temporary errors.
            return retry(request, attempt);

        return false;
    }

    private void acquireSlot() {
        try {
            while (inflight.get() >= targetInflight())
                Thread.sleep(1);

            inflight.incrementAndGet();
        }
        catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
    }

    private void releaseSlot() {
        inflight.decrementAndGet();
    }

    public void await() {
        try {
            while (inflight.get() > 0)
                Thread.sleep(10);
        }
        catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }

    @Override
    public CompletableFuture<HttpResponse> enqueue(DocumentId documentId, HttpRequest request) {
        CompletableFuture<HttpResponse> result = new CompletableFuture<>(); // Carries the aggregate result of the operation, including retries.
        CompletableFuture<HttpResponse> vessel = new CompletableFuture<>(); // Holds the computation of a single dispatch to the HTTP client.
        CompletableFuture<?> previous = inflightById.put(documentId, result);
        if (destroyed.get()) {
            result.cancel(true);
            return result;
        }

        if (previous == null) {
            acquireSlot();
            offer(() -> cluster.dispatch(request, vessel));
        }
        else
            previous.whenComplete((__, ___) -> offer(() -> cluster.dispatch(request, vessel)));

        handleAttempt(vessel, request, result, 1);

        result.whenComplete((__, ___) -> {
            if (inflightById.compute(documentId, (____, current) -> current == result ? null : current) == null)
                releaseSlot();
        });

        return result;
    }

    /** Handles the result of one attempt at the given operation, retrying if necessary. */
    private void handleAttempt(CompletableFuture<HttpResponse> vessel, HttpRequest request, CompletableFuture<HttpResponse> result, int attempt) {
        vessel.whenCompleteAsync((response, thrown) -> {
                                     // Retry the operation if it failed with a transient error ...
                                     if (thrown != null ? retry(request, thrown, attempt)
                                                        : retry(request, response, attempt)) {
                                         retries.incrementAndGet();
                                         CircuitBreaker.State state = breaker.state();
                                         CompletableFuture<HttpResponse> retry = new CompletableFuture<>();
                                         offer(() -> cluster.dispatch(request, retry));
                                         handleAttempt(retry, request, result, attempt + (state == HALF_OPEN ? 0 : 1));
                                     }
                                     // ... or accept the outcome and mark the operation as complete.
                                     else {
                                         if (thrown == null) result.complete(response);
                                         else result.completeExceptionally(thrown);
                                     }
                                 },
                                 resultExecutor);
    }

    @Override
    public void destroy() {
        if ( ! destroyed.getAndSet(true))
            inflightById.values().forEach(result -> result.cancel(true));

        cluster.close();
        resultExecutor.shutdown();
    }

}
