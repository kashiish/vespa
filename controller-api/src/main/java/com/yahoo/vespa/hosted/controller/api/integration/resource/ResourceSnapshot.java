// Copyright 2019 Oath Inc. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
package com.yahoo.vespa.hosted.controller.api.integration.resource;

import com.yahoo.config.provision.ApplicationId;
import com.yahoo.vespa.hosted.controller.api.integration.noderepository.NodeRepositoryNode;

import java.time.Instant;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * @author olaa
 */
public class ResourceSnapshot {

    private final ApplicationId applicationId;
    private final ResourceAllocation resourceAllocation;
    private final Instant timestamp;

    public ResourceSnapshot(ApplicationId applicationId, double cpuCores, double memoryGb, double diskGb, Instant timestamp) {
        this.applicationId = applicationId;
        this.resourceAllocation = new ResourceAllocation(cpuCores, memoryGb, diskGb);
        this.timestamp = timestamp;
    }

    public static ResourceSnapshot from(List<NodeRepositoryNode> nodes, Instant timestamp) {
        Set<ApplicationId> applicationIds = nodes.stream()
                .map(n -> ApplicationId.from(n.getOwner().tenant, n.getOwner().application, n.getOwner().instance))
                .collect(Collectors.toSet());

        if (applicationIds.size() != 1) throw new IllegalArgumentException("List of nodes can only represent one application");

        return new ResourceSnapshot(
                applicationIds.iterator().next(),
                nodes.stream().mapToDouble(NodeRepositoryNode::getMinCpuCores).sum(),
                nodes.stream().mapToDouble(NodeRepositoryNode::getMinMainMemoryAvailableGb).sum(),
                nodes.stream().mapToDouble(NodeRepositoryNode::getMinDiskAvailableGb).sum(),
                timestamp
        );
    }

    public ApplicationId getApplicationId() {
        return applicationId;
    }

    public double getCpuCores() {
        return resourceAllocation.getCpuCores();
    }

    public double getMemoryGb() {
        return resourceAllocation.getMemoryGb();
    }

    public double getDiskGb() {
        return resourceAllocation.getDiskGb();
    }

    public Instant getTimestamp() {
        return timestamp;
    }

}
