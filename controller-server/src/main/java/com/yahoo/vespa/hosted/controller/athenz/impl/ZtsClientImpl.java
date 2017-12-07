// Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
package com.yahoo.vespa.hosted.controller.athenz.impl;

import com.yahoo.athenz.auth.util.Crypto;
import com.yahoo.athenz.zts.InstanceRefreshRequest;
import com.yahoo.athenz.zts.RoleCertificateRequest;
import com.yahoo.athenz.zts.TenantDomains;
import com.yahoo.athenz.zts.ZTSClient;
import com.yahoo.athenz.zts.ZTSClientException;
import com.yahoo.log.LogLevel;
import com.yahoo.vespa.hosted.controller.api.identifiers.AthenzDomain;
import com.yahoo.vespa.hosted.controller.api.integration.athenz.AthenzIdentity;
import com.yahoo.vespa.hosted.controller.api.integration.athenz.AthenzIdentityCertificate;
import com.yahoo.vespa.hosted.controller.api.integration.athenz.AthenzRoleCertificate;
import com.yahoo.vespa.hosted.controller.api.integration.athenz.AthenzService;
import com.yahoo.vespa.hosted.controller.api.integration.athenz.ZtsClient;
import com.yahoo.vespa.hosted.controller.api.integration.athenz.ZtsException;
import com.yahoo.vespa.hosted.controller.athenz.config.AthenzConfig;

import java.security.PrivateKey;
import java.security.cert.X509Certificate;
import java.time.Duration;
import java.util.List;
import java.util.function.Supplier;
import java.util.logging.Logger;

import static java.util.stream.Collectors.toList;

/**
 * @author bjorncs
 */
public class ZtsClientImpl implements ZtsClient {

    private static final Logger log = Logger.getLogger(ZtsClientImpl.class.getName());
    private static final Duration CERTIFICATE_EXPIRY = Duration.ofHours(1);

    private final ZTSClient ztsClient;
    private final AthenzService service;
    private final PrivateKey privateKey;
    private final String certificateDnsDomain;

    public ZtsClientImpl(ZTSClient ztsClient, PrivateKey privateKey, AthenzConfig config) {
        this.ztsClient = ztsClient;
        this.service = new AthenzService(config.domain(), config.service().name());
        this.privateKey = privateKey;
        this.certificateDnsDomain = config.certDnsDomain();
    }

    @Override
    public List<AthenzDomain> getTenantDomainsForUser(AthenzIdentity identity) {
        return getOrThrow(() -> {
            log.log(LogLevel.DEBUG, String.format(
                    "getTenantDomains(domain=%s, identity=%s, rolename=admin, service=%s)",
                    service.getDomain().id(), identity.getFullName(), service.getFullName()));
            TenantDomains domains = ztsClient.getTenantDomains(
                    service.getDomain().id(), identity.getFullName(), "admin", service.getName());
            return domains.getTenantDomainNames().stream()
                    .map(AthenzDomain::new)
                    .collect(toList());
        });
    }

    @Override
    public AthenzIdentityCertificate getIdentityCertificate() {
        return getOrThrow(() -> {
            log.log(LogLevel.DEBUG,
                    String.format("postInstanceRefreshRequest(service=%s)", service.getFullName()));
            InstanceRefreshRequest req =
                    ZTSClient.generateInstanceRefreshRequest(
                            service.getDomain().id(),
                            service.getName(),
                            privateKey,
                            certificateDnsDomain,
                            (int) CERTIFICATE_EXPIRY.getSeconds());
            X509Certificate certificate = Crypto.loadX509Certificate(
                    ztsClient.postInstanceRefreshRequest(service.getDomain().id(), service.getName(), req)
                            .getCertificate());
            return new AthenzIdentityCertificate(certificate, privateKey);
        });
    }

    @Override
    public AthenzRoleCertificate getRoleCertificate(AthenzDomain roleDomain, String roleName) {
        return getOrThrow(() -> {
            log.log(LogLevel.DEBUG,
                    String.format("postRoleCertificateRequest(service=%s, roleDomain=%s, roleName=%s)",
                                  service.getFullName(), roleDomain.id(), roleName));
            RoleCertificateRequest req =
                    ZTSClient.generateRoleCertificateRequest(
                            service.getDomain().id(),
                            service.getName(),
                            roleDomain.id(),
                            roleName,
                            privateKey,
                            certificateDnsDomain,
                            (int)CERTIFICATE_EXPIRY.getSeconds());
            X509Certificate roleCertificate = Crypto.loadX509Certificate(
                    ztsClient.postRoleCertificateRequest(roleDomain.id(), roleName, req)
                            .getToken());
            return new AthenzRoleCertificate(roleCertificate, privateKey);
        });
    }

    private static <T> T getOrThrow(Supplier<T> wrappedCode) {
        try {
            return wrappedCode.get();
        } catch (ZTSClientException e) {
            log.warning("Error from Athenz: " + e.getMessage());
            throw new ZtsException(e.getCode(), e);
        }
    }

}
