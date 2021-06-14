// Copyright Verizon Media. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
package ai.vespa.feed.client;

import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLContext;
import java.io.IOException;
import java.io.UncheckedIOException;
import java.net.URI;
import java.nio.file.Path;
import java.security.PrivateKey;
import java.security.cert.X509Certificate;
import java.time.Duration;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.function.Supplier;

import static java.util.Objects.requireNonNull;

/**
 * Builder for creating a {@link FeedClient} instance.
 *
 * @author bjorncs
 * @author jonmv
 */
public class FeedClientBuilder {

    static final FeedClient.RetryStrategy defaultRetryStrategy = new FeedClient.RetryStrategy() { };

    final List<URI> endpoints;
    final Map<String, Supplier<String>> requestHeaders = new HashMap<>();
    SSLContext sslContext;
    HostnameVerifier hostnameVerifier;
    int connectionsPerEndpoint = 4;
    int maxStreamsPerConnection = 128;
    FeedClient.RetryStrategy retryStrategy = defaultRetryStrategy;
    FeedClient.CircuitBreaker circuitBreaker = new GracePeriodCircuitBreaker(Duration.ofSeconds(1), Duration.ofMinutes(10));
    Path certificateFile;
    Path privateKeyFile;
    Path caCertificatesFile;
    Collection<X509Certificate> certificate;
    PrivateKey privateKey;
    Collection<X509Certificate> caCertificates;
    boolean benchmark;

    public static FeedClientBuilder create(URI endpoint) { return new FeedClientBuilder(Collections.singletonList(endpoint)); }

    public static FeedClientBuilder create(List<URI> endpoints) { return new FeedClientBuilder(endpoints); }

    private FeedClientBuilder(List<URI> endpoints) {
        if (endpoints.isEmpty())
            throw new IllegalArgumentException("At least one endpoint must be provided");

        for (URI endpoint : endpoints)
            requireNonNull(endpoint.getHost());

        this.endpoints = new ArrayList<>(endpoints);
    }

    /**
     * Sets the number of connections this client will use per endpoint.
     *
     * A reasonable value here is a small multiple of the numbers of containers in the
     * cluster to feed, so load can be balanced across these.
     * In general, this value should be kept as low as possible, but poor connectivity
     * between feeder and cluster may also warrant a higher number of connections.
     */
    public FeedClientBuilder setConnectionsPerEndpoint(int max) {
        if (max < 1) throw new IllegalArgumentException("Max connections must be at least 1, but was " + max);
        this.connectionsPerEndpoint = max;
        return this;
    }

    /**
     * Sets the maximum number of streams per HTTP/2 connection for this client.
     *
     * This determines the maximum number of concurrent, inflight requests for this client,
     * which is {@code maxConnections * maxStreamsPerConnection}. Prefer more streams over
     * more connections, when possible. The server's maximum is usually around 128-256.
     */
    public FeedClientBuilder setMaxStreamPerConnection(int max) {
        if (max < 1) throw new IllegalArgumentException("Max streams per connection must be at least 1, but was " + max);
        this.maxStreamsPerConnection = max;
        return this;
    }

    public FeedClientBuilder setSslContext(SSLContext context) {
        this.sslContext = requireNonNull(context);
        return this;
    }

    public FeedClientBuilder setHostnameVerifier(HostnameVerifier verifier) {
        this.hostnameVerifier = requireNonNull(verifier);
        return this;
    }

    public FeedClientBuilder setBenchmarkOn(boolean on) {
        this.benchmark = on;
        return this;
    }

    public FeedClientBuilder addRequestHeader(String name, String value) {
        return addRequestHeader(name, () -> requireNonNull(value));
    }

    public FeedClientBuilder addRequestHeader(String name, Supplier<String> valueSupplier) {
        this.requestHeaders.put(requireNonNull(name), requireNonNull(valueSupplier));
        return this;
    }

    public FeedClientBuilder setRetryStrategy(FeedClient.RetryStrategy strategy) {
        this.retryStrategy = requireNonNull(strategy);
        return this;
    }

    public FeedClientBuilder setCircuitBreaker(FeedClient.CircuitBreaker breaker) {
        this.circuitBreaker = requireNonNull(breaker);
        return this;
    }

    public FeedClientBuilder setCertificate(Path certificatePemFile, Path privateKeyPemFile) {
        this.certificateFile = certificatePemFile;
        this.privateKeyFile = privateKeyPemFile;
        return this;
    }

    public FeedClientBuilder setCertificate(Collection<X509Certificate> certificate, PrivateKey privateKey) {
        this.certificate = certificate;
        this.privateKey = privateKey;
        return this;
    }

    public FeedClientBuilder setCertificate(X509Certificate certificate, PrivateKey privateKey) {
        return setCertificate(Collections.singletonList(certificate), privateKey);
    }

    public FeedClientBuilder setCaCertificatesFile(Path caCertificatesFile) {
        this.caCertificatesFile = caCertificatesFile;
        return this;
    }

    public FeedClientBuilder setCaCertificates(Collection<X509Certificate> caCertificates) {
        this.caCertificates = caCertificates;
        return this;
    }

    public FeedClient build() {
        try {
            validateConfiguration();
            return new HttpFeedClient(this);
        } catch (IOException e) {
            throw new UncheckedIOException(e);
        }
    }

    SSLContext constructSslContext() throws IOException {
        if (sslContext != null) return sslContext;
        SslContextBuilder sslContextBuilder = new SslContextBuilder();
        if (certificateFile != null && privateKeyFile != null) {
            sslContextBuilder.withCertificateAndKey(certificateFile, privateKeyFile);
        } else if (certificate != null && privateKey != null) {
            sslContextBuilder.withCertificateAndKey(certificate, privateKey);
        }
        if (caCertificatesFile != null) {
            sslContextBuilder.withCaCertificates(caCertificatesFile);
        } else if (caCertificates != null) {
            sslContextBuilder.withCaCertificates(caCertificates);
        }
        return sslContextBuilder.build();
    }

    private void validateConfiguration() {
        if (sslContext != null && (
                certificateFile != null || caCertificatesFile != null || privateKeyFile != null ||
                        certificate != null || caCertificates != null || privateKey != null)) {
            throw new IllegalArgumentException("Cannot set both SSLContext and certificate / CA certificates");
        }
        if (certificate != null && certificateFile != null) {
            throw new IllegalArgumentException("Cannot set both certificate directly and as file");
        }
        if (privateKey != null && privateKeyFile != null) {
            throw new IllegalArgumentException("Cannot set both private key directly and as file");
        }
        if (caCertificates != null && caCertificatesFile != null) {
            throw new IllegalArgumentException("Cannot set both CA certificates directly and as file");
        }
        if (certificate != null && certificate.isEmpty()) {
            throw new IllegalArgumentException("Certificate cannot be empty");
        }
        if (caCertificates != null && caCertificates.isEmpty()) {
            throw new IllegalArgumentException("CA certificates cannot be empty");
        }
    }

}
