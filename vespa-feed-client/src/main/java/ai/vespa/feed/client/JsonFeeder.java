// Copyright Verizon Media. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
package ai.vespa.feed.client;

import ai.vespa.feed.client.FeedClient.OperationType;
import com.fasterxml.jackson.core.JsonFactory;
import com.fasterxml.jackson.core.JsonParser;
import com.fasterxml.jackson.core.JsonToken;

import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.io.InterruptedIOException;
import java.io.UncheckedIOException;
import java.time.Duration;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

import static ai.vespa.feed.client.FeedClient.OperationType.PUT;
import static ai.vespa.feed.client.FeedClient.OperationType.REMOVE;
import static ai.vespa.feed.client.FeedClient.OperationType.UPDATE;
import static com.fasterxml.jackson.core.JsonToken.END_ARRAY;
import static com.fasterxml.jackson.core.JsonToken.START_ARRAY;
import static com.fasterxml.jackson.core.JsonToken.START_OBJECT;
import static com.fasterxml.jackson.core.JsonToken.VALUE_FALSE;
import static com.fasterxml.jackson.core.JsonToken.VALUE_STRING;
import static com.fasterxml.jackson.core.JsonToken.VALUE_TRUE;
import static java.lang.Math.min;
import static java.nio.charset.StandardCharsets.UTF_8;
import static java.util.Objects.requireNonNull;

/**
 * @author jonmv
 * @author bjorncs
 */
public class JsonFeeder implements Closeable {

    private final ExecutorService resultExecutor = Executors.newSingleThreadExecutor(r -> {
        Thread t = new Thread(r, "json-feeder-result-executor");
        t.setDaemon(true);
        return t;
    });
    private final FeedClient client;
    private final OperationParameters protoParameters;

    private JsonFeeder(FeedClient client, OperationParameters protoParameters) {
        this.client = client;
        this.protoParameters = protoParameters;
    }

    public interface ResultCallback {
        /**
         * Invoked after each operation has either completed successfully or failed
         *
         * @param result Non-null if operation completed successfully
         * @param error Non-null if operation failed
         */
        default void onNextResult(Result result, Throwable error) { }

        /**
         * Invoked if an unrecoverable error occurred during feed processing,
         * after which no other {@link ResultCallback} methods are invoked.
         */
        default void onError(Throwable error) { }

        /**
         * Invoked when all feed operations are either completed successfully or failed.
         */
        default void onComplete() { }
    }

    public static Builder builder(FeedClient client) { return new Builder(client); }

    /** Feeds single JSON feed operations on the form
     *  <pre>
     *    {
     *      "id": "id:ns:type::boo",
     *      "fields": { ... document fields ... }
     *    }
     *  </pre>
     */
    public CompletableFuture<Result> feedSingle(String json) {
        CompletableFuture<Result> result = new CompletableFuture<>();
        try {
            SingleOperationParserAndExecutor parser = new SingleOperationParserAndExecutor(json.getBytes(UTF_8));
            parser.next().whenCompleteAsync((operationResult, error) -> {
                if (error != null) {
                    result.completeExceptionally(error);
                } else {
                    result.complete(operationResult);
                }
            }, resultExecutor);
        } catch (Exception e) {
            resultExecutor.execute(() -> result.completeExceptionally(e));
        }
        return result;
    }

    /** Feeds a stream containing a JSON array of feed operations on the form
     * <pre>
     *     [
     *       {
     *         "id": "id:ns:type::boo",
     *         "fields": { ... document fields ... }
     *       },
     *       {
     *         "put": "id:ns:type::foo",
     *         "fields": { ... document fields ... }
     *       },
     *       {
     *         "update": "id:ns:type:n=4:bar",
     *         "create": true,
     *         "fields": { ... partial update fields ... }
     *       },
     *       {
     *         "remove": "id:ns:type:g=foo:bar",
     *         "condition": "type.baz = \"bax\""
     *       },
     *       ...
     *     ]
     * </pre>
     * Note that {@code "id"} is an alias for the document put operation.
     */
    public CompletableFuture<Void> feedMany(InputStream jsonStream, ResultCallback resultCallback) {
        return feedMany(jsonStream, 1 << 26, resultCallback);
    }

    public CompletableFuture<Void> feedMany(InputStream jsonStream) {
        return feedMany(jsonStream, new ResultCallback() { });
    }

    CompletableFuture<Void> feedMany(InputStream jsonStream, int size, ResultCallback resultCallback) {
        RingBufferStream buffer = new RingBufferStream(jsonStream, size);
        CompletableFuture<Void> overallResult = new CompletableFuture<>();
        CompletableFuture<Result> result;
        AtomicInteger pending = new AtomicInteger(1); // The below dispatch loop itself is counted as a single pending operation
        AtomicBoolean finalCallbackInvoked = new AtomicBoolean();
        try {
            while ((result = buffer.next()) != null) {
                pending.incrementAndGet();
                result.whenCompleteAsync((r, t) -> {
                    if (!finalCallbackInvoked.get()) {
                        resultCallback.onNextResult(r, t);
                    }
                    if (pending.decrementAndGet() == 0 && finalCallbackInvoked.compareAndSet(false, true)) {
                        resultCallback.onComplete();
                        overallResult.complete(null);
                    }
                }, resultExecutor);
            }
            if (pending.decrementAndGet() == 0 && finalCallbackInvoked.compareAndSet(false, true)) {
                resultExecutor.execute(() -> {
                    resultCallback.onComplete();
                    overallResult.complete(null);
                });
            }
        } catch (Exception e) {
            if (finalCallbackInvoked.compareAndSet(false, true)) {
                resultExecutor.execute(() -> {
                    resultCallback.onError(e);
                    overallResult.completeExceptionally(e);
                });
            }
        }
        return overallResult;
    }

    private static final JsonFactory factory = new JsonFactory();

    @Override public void close() throws IOException {
        client.close();
        resultExecutor.shutdown();
        try {
            if (!resultExecutor.awaitTermination(30, TimeUnit.SECONDS)) {
                throw new IOException("Failed to close client in time");
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }

    private class RingBufferStream extends InputStream {

        private final byte[] b = new byte[1];
        private final InputStream in;
        private final byte[] data;
        private final int size;
        private final Object lock = new Object();
        private Throwable thrown = null;
        private long tail = 0;
        private long pos = 0;
        private long head = 0;
        private boolean done = false;
        private final OperationParserAndExecutor parserAndExecutor;

        RingBufferStream(InputStream in, int size) {
            this.in = in;
            this.data = new byte[size];
            this.size = size;

            new Thread(this::fill, "feed-reader").start();

            try { this.parserAndExecutor = new RingBufferBackedOperationParserAndExecutor(factory.createParser(this)); }
            catch (IOException e) { throw new UncheckedIOException(e); }
        }

        @Override
        public int read() throws IOException {
            return read(b, 0, 1) == -1 ? -1 : b[0];
        }

        @Override
        public int read(byte[] buffer, int off, int len) throws IOException {
            try {
                int ready;
                synchronized (lock) {
                    while ((ready = (int) (head - pos)) == 0 && ! done)
                        lock.wait();
                }
                if (thrown != null) throw new RuntimeException("Error reading input", thrown);
                if (ready == 0) return -1;

                ready = min(ready, len);
                int offset = (int) (pos % size);
                int length = min(ready, size - offset);
                System.arraycopy(data, offset, buffer, off, length);
                if (length < ready)
                    System.arraycopy(data, 0, buffer, off + length, ready - length);

                pos += ready;
                return ready;
            }
            catch (InterruptedException e) {
                throw new InterruptedIOException("Interrupted waiting for data: " + e.getMessage());
            }
        }

        public CompletableFuture<Result> next() throws IOException {
           return parserAndExecutor.next();
        }

        private final byte[] prefix = "{\"fields\":".getBytes(UTF_8);
        private byte[] copy(long start, long end) {
            int length = (int) (end - start);
            byte[] buffer = new byte[prefix.length + length + 1];
            System.arraycopy(prefix, 0, buffer, 0, prefix.length);

            int offset = (int) (start % size);
            int toWrite = min(length, size - offset);
            System.arraycopy(data, offset, buffer, prefix.length, toWrite);
            if (toWrite < length)
                System.arraycopy(data, 0, buffer, prefix.length + toWrite, length - toWrite);

            buffer[buffer.length - 1] = '}';
            return buffer;
        }


        @Override
        public void close() throws IOException {
            synchronized (lock) {
                done = true;
                lock.notifyAll();
            }
            in.close();
        }

        private void fill() {
            try {
                while (true) {
                    int free;
                    synchronized (lock) {
                        while ((free = (int) (tail + size - head)) <= 0 && ! done)
                            lock.wait();
                    }
                    if (done) break;

                    int off = (int) (head % size);
                    int len = min(min(free, size - off), 1 << 13);
                    int read = in.read(data, off, len);

                    synchronized (lock) {
                        if (read < 0) done = true;
                        else head += read;
                        lock.notify();
                    }
                }
            }
            catch (Throwable t) {
                synchronized (lock) {
                    done = true;
                    thrown = t;
                }
            }
        }

        private class RingBufferBackedOperationParserAndExecutor extends OperationParserAndExecutor {

            RingBufferBackedOperationParserAndExecutor(JsonParser parser) throws IOException { super(parser, true); }

            @Override
            String getDocumentJson(long start, long end) {
                String payload = new String(copy(start, end), UTF_8);
                synchronized (lock) {
                    tail = end;
                    lock.notify();
                }
                return payload;
            }
        }
    }

    private class SingleOperationParserAndExecutor extends OperationParserAndExecutor {

        private final byte[] json;

        SingleOperationParserAndExecutor(byte[] json) throws IOException {
            super(factory.createParser(json), false);
            this.json = json;
        }

        @Override
        String getDocumentJson(long start, long end) {
            return new String(json, (int) start, (int) (end - start), UTF_8);
        }
    }

    private abstract class OperationParserAndExecutor {

        private final JsonParser parser;
        private final boolean multipleOperations;
        private boolean arrayPrefixParsed;

        protected OperationParserAndExecutor(JsonParser parser, boolean multipleOperations) throws IOException {
            this.parser = parser;
            this.multipleOperations = multipleOperations;
        }

        abstract String getDocumentJson(long start, long end);

        CompletableFuture<Result> next() throws IOException {
            try {
                if (multipleOperations && !arrayPrefixParsed){
                    expect(START_ARRAY);
                    arrayPrefixParsed = true;
                }

                JsonToken token = parser.nextToken();
                if (token == END_ARRAY && multipleOperations) return null;
                else if (token == null && !multipleOperations) return null;
                else if (token == START_OBJECT);
                else throw new JsonParseException("Unexpected token '" + parser.currentToken() + "' at offset " + parser.getTokenLocation().getByteOffset());
                long start = 0, end = -1;
                OperationType type = null;
                DocumentId id = null;
                OperationParameters parameters = protoParameters;
                loop: while (true) {
                    switch (parser.nextToken()) {
                        case FIELD_NAME:
                            switch (parser.getText()) {
                                case "id":
                                case "put":    type = PUT;    id = readId(); break;
                                case "update": type = UPDATE; id = readId(); break;
                                case "remove": type = REMOVE; id = readId(); break;
                                case "condition": parameters = parameters.testAndSetCondition(readString()); break;
                                case "create":    parameters = parameters.createIfNonExistent(readBoolean()); break;
                                case "fields": {
                                    expect(START_OBJECT);
                                    start = parser.getTokenLocation().getByteOffset();
                                    int depth = 1;
                                    while (depth > 0) switch (parser.nextToken()) {
                                        case START_OBJECT: ++depth; break;
                                        case END_OBJECT:   --depth; break;
                                    }
                                    end = parser.getTokenLocation().getByteOffset() + 1;
                                    break;
                                }
                                default: throw new JsonParseException("Unexpected field name '" + parser.getText() + "' at offset " +
                                        parser.getTokenLocation().getByteOffset());
                            }
                            break;

                        case END_OBJECT:
                            break loop;

                        default:
                            throw new JsonParseException("Unexpected token '" + parser.currentToken() + "' at offset " +
                                    parser.getTokenLocation().getByteOffset());
                    }
                }
                if (id == null)
                    throw new JsonParseException("No document id for document at offset " + start);

                if (end < start)
                    throw new JsonParseException("No 'fields' object for document at offset " + parser.getTokenLocation().getByteOffset());
                String payload = getDocumentJson(start, end);
                switch (type) {
                    case PUT:    return client.put   (id, payload, parameters);
                    case UPDATE: return client.update(id, payload, parameters);
                    case REMOVE: return client.remove(id, parameters);
                    default: throw new JsonParseException("Unexpected operation type '" + type + "'");
                }
            } catch (com.fasterxml.jackson.core.JacksonException e) {
                throw new JsonParseException("Failed to parse JSON", e);
            }
        }

        private void expect(JsonToken token) throws IOException {
            if (parser.nextToken() != token)
                throw new JsonParseException("Expected '" + token + "' at offset " + parser.getTokenLocation().getByteOffset() +
                        ", but found '" + parser.currentToken() + "' (" + parser.getText() + ")");
        }

        private String readString() throws IOException {
            String value = parser.nextTextValue();
            if (value == null)
                throw new JsonParseException("Expected '" + VALUE_STRING + "' at offset " + parser.getTokenLocation().getByteOffset() +
                        ", but found '" + parser.currentToken() + "' (" + parser.getText() + ")");

            return value;
        }

        private boolean readBoolean() throws IOException {
            Boolean value = parser.nextBooleanValue();
            if (value == null)
                throw new JsonParseException("Expected '" + VALUE_FALSE + "' or '" + VALUE_TRUE + "' at offset " + parser.getTokenLocation().getByteOffset() +
                        ", but found '" + parser.currentToken() + "' (" + parser.getText() + ")");

            return value;

        }

        private DocumentId readId() throws IOException {
            return DocumentId.of(readString());
        }

    }


    public static class Builder {

        final FeedClient client;
        OperationParameters parameters = OperationParameters.empty();

        private Builder(FeedClient client) {
            this.client = requireNonNull(client);
        }

        public Builder withTimeout(Duration timeout) {
            parameters = parameters.timeout(timeout);
            return this;
        }

        public Builder withRoute(String route) {
            parameters = parameters.route(route);
            return this;
        }

        public Builder withTracelevel(int tracelevel) {
            parameters = parameters.tracelevel(tracelevel);
            return this;
        }

        public JsonFeeder build() {
            return new JsonFeeder(client, parameters);
        }

    }
}
