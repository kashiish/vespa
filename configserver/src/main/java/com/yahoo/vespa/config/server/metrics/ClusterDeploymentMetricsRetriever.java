// Copyright 2019 Oath Inc. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
package com.yahoo.vespa.config.server.metrics;

import ai.vespa.util.http.hc4.VespaHttpClientBuilder;
import com.yahoo.concurrent.DaemonThreadFactory;
import com.yahoo.slime.ArrayTraverser;
import com.yahoo.slime.Cursor;
import com.yahoo.slime.Inspector;
import com.yahoo.slime.Slime;
import com.yahoo.slime.SlimeUtils;
import com.yahoo.yolean.Exceptions;
import org.apache.http.client.config.RequestConfig;
import org.apache.http.client.methods.CloseableHttpResponse;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.CloseableHttpClient;
import org.apache.http.impl.conn.PoolingHttpClientConnectionManager;
import org.apache.http.util.EntityUtils;

import java.io.IOException;
import java.net.URI;
import java.time.Duration;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.OptionalDouble;
import java.util.concurrent.Callable;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import java.util.function.Supplier;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.stream.Collectors;


/**
 * Client for reaching out to nodes in an application instance and get their
 * metrics.
 *
 * @author olaa
 * @author ogronnesby
 */
public class ClusterDeploymentMetricsRetriever {

    private static final Logger log = Logger.getLogger(ClusterDeploymentMetricsRetriever.class.getName());

    private static final String VESPA_CONTAINER = "vespa.container";
    private static final String VESPA_QRSERVER = "vespa.qrserver";
    private static final String VESPA_DISTRIBUTOR = "vespa.distributor";
    private static final String VESPA_CONTAINER_CLUSTERCONTROLLER = "vespa.container-clustercontroller";
    private static final List<String> WANTED_METRIC_SERVICES = List.of(VESPA_CONTAINER, VESPA_QRSERVER, VESPA_DISTRIBUTOR, VESPA_CONTAINER_CLUSTERCONTROLLER);


    private static final ExecutorService executor = Executors.newFixedThreadPool(10, new DaemonThreadFactory("cluster-deployment-metrics-retriever-"));

    private static final CloseableHttpClient httpClient = VespaHttpClientBuilder
                                                            .create(registry ->
                                                                    new PoolingHttpClientConnectionManager(registry, null, null, null, 1, TimeUnit.MINUTES))
                                                            .setDefaultRequestConfig(
                                                                    RequestConfig.custom()
                                                                            .setConnectionRequestTimeout((int)Duration.ofSeconds(60).toMillis())
                                                                            .setConnectTimeout((int)Duration.ofSeconds(10).toMillis())
                                                                            .setSocketTimeout((int)Duration.ofSeconds(10).toMillis())
                                                                            .build())
                                                            .build();

    /**
     * Call the metrics API on each host and aggregate the metrics
     * into a single value, grouped by cluster.
     */
    public Map<ClusterInfo, DeploymentMetricsAggregator> requestMetricsGroupedByCluster(Collection<URI> hosts) {
        Map<ClusterInfo, DeploymentMetricsAggregator> clusterMetricsMap = new ConcurrentHashMap<>();

        long startTime = System.currentTimeMillis();
        List<Callable<Void>> jobs = hosts.stream()
                .map(hostUri -> (Callable<Void>) () -> {
                    try {
                        getHostMetrics(hostUri, clusterMetricsMap);
                    } catch (Exception e) {
                        log.log(Level.FINE, e, () -> "Failed to download metrics: " + e.getMessage());
                    }
                    return null;
                })
                .collect(Collectors.toList());
        try {
            executor.invokeAll(jobs, 1, TimeUnit.MINUTES);
        } catch (InterruptedException e) {
            throw new RuntimeException("Failed to retrieve metrics in time: " + e.getMessage(), e);
        }

        log.log(Level.FINE, () ->
                String.format("Metric retrieval for %d nodes took %d milliseconds", hosts.size(), System.currentTimeMillis() - startTime)
        );

        return clusterMetricsMap;
    }

    private static void getHostMetrics(URI hostURI, Map<ClusterInfo, DeploymentMetricsAggregator> clusterMetricsMap) {
        Slime responseBody = doMetricsRequest(hostURI);
        Cursor error = responseBody.get().field("error_message");

        if (error.valid()) {
            log.info("Failed to retrieve metrics from " + hostURI + ": " + error.asString());
        }

        Inspector services = responseBody.get().field("services");
        services.traverse((ArrayTraverser) (i, servicesInspector) ->
            parseService(servicesInspector, clusterMetricsMap)
        );
    }

    private static void parseService(Inspector service, Map<ClusterInfo, DeploymentMetricsAggregator> clusterMetricsMap) {
        String serviceName = service.field("name").asString();
        if (!WANTED_METRIC_SERVICES.contains(serviceName)) return;
        service.field("metrics").traverse((ArrayTraverser) (i, metric) ->
                addMetricsToAggregator(serviceName, metric, clusterMetricsMap)
        );
    }

    private static void addMetricsToAggregator(String serviceName, Inspector metric, Map<ClusterInfo, DeploymentMetricsAggregator> clusterMetricsMap) {
        Inspector values = metric.field("values");
        ClusterInfo clusterInfo = getClusterInfoFromDimensions(metric.field("dimensions"));
        Supplier<DeploymentMetricsAggregator> aggregator = () -> clusterMetricsMap.computeIfAbsent(clusterInfo, c -> new DeploymentMetricsAggregator());

        switch (serviceName) {
            case VESPA_CONTAINER:
                optionalDouble(values.field("query_latency.sum")).ifPresent(qlSum ->
                        aggregator.get()
                                .addContainerLatency(qlSum, values.field("query_latency.count").asDouble())
                                .addFeedLatency(values.field("feed.latency.sum").asDouble(), values.field("feed.latency.count").asDouble()));
                break;
            case VESPA_QRSERVER:
                optionalDouble(values.field("query_latency.sum")).ifPresent(qlSum ->
                        aggregator.get()
                                .addQrLatency(qlSum, values.field("query_latency.count").asDouble()));
                break;
            case VESPA_DISTRIBUTOR:
                optionalDouble(values.field("vds.distributor.docsstored.average"))
                        .ifPresent(docCount -> aggregator.get().addDocumentCount(docCount));
                break;
            case VESPA_CONTAINER_CLUSTERCONTROLLER:
                optionalDouble(values.field("cluster-controller.resource_usage.max_memory_utilization.last")).ifPresent(memoryUtil ->
                        aggregator.get()
                                .addMemoryUsage(memoryUtil,
                                        values.field("cluster-controller.resource_usage.memory_limit.last").asDouble())
                                .addDiskUsage(values.field("cluster-controller.resource_usage.max_disk_utilization.last").asDouble(),
                                        values.field("cluster-controller.resource_usage.disk_limit.last").asDouble()));
                break;
        }
    }

    private static ClusterInfo getClusterInfoFromDimensions(Inspector dimensions) {
        return new ClusterInfo(dimensions.field("clusterid").asString(), dimensions.field("clustertype").asString());
    }

    private static Slime doMetricsRequest(URI hostURI) {
        HttpGet get = new HttpGet(hostURI);
        try (CloseableHttpResponse response = httpClient.execute(get)) {
            byte[] body = EntityUtils.toByteArray(response.getEntity());
            return SlimeUtils.jsonToSlime(body);
        } catch (IOException e) {
            log.info("Was unable to fetch metrics from " + hostURI + " : " + Exceptions.toMessageString(e));
            return new Slime();
        }
    }

    private static OptionalDouble optionalDouble(Inspector field) {
        return field.valid() ? OptionalDouble.of(field.asDouble()) : OptionalDouble.empty();
    }
}
