// Copyright 2019 Oath Inc. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
package com.yahoo.vespa.hosted.controller.maintenance;

import com.yahoo.component.Version;
import com.yahoo.config.provision.CloudName;
import com.yahoo.config.provision.zone.ZoneApi;
import com.yahoo.vespa.hosted.controller.Controller;
import com.yahoo.vespa.hosted.controller.api.integration.configserver.Node;
import com.yahoo.vespa.hosted.controller.application.SystemApplication;
import com.yahoo.vespa.hosted.controller.versions.OsVersionTarget;

import java.time.Duration;
import java.util.Optional;
import java.util.Set;
import java.util.logging.Logger;

/**
 * Trigger OS upgrade of zones in the system, according to the current OS version target.
 *
 * Target OS version is set per cloud, and an instance of this exists per cloud in the system.
 *
 * {@link OsUpgradeScheduler} may update the target automatically in supported clouds.
 *
 * @author mpolden
 */
public class OsUpgrader extends InfrastructureUpgrader<OsVersionTarget> {

    private static final Logger log = Logger.getLogger(OsUpgrader.class.getName());

    private static final Set<Node.State> upgradableNodeStates = Set.of(
            Node.State.ready,
            Node.State.active,
            Node.State.reserved
    );

    private final CloudName cloud;

    public OsUpgrader(Controller controller, Duration interval, CloudName cloud) {
        super(controller, interval, controller.zoneRegistry().osUpgradePolicy(cloud), SystemApplication.all(), name(cloud));
        this.cloud = cloud;
    }

    @Override
    protected void upgrade(OsVersionTarget target, SystemApplication application, ZoneApi zone) {
        Duration zoneUpgradeBudget = zoneBudgetOf(target.upgradeBudget(), zone);
        log.info(String.format("Upgrading OS of %s to version %s in %s in cloud %s%s", application.id(),
                               target.osVersion().version().toFullString(),
                               zone.getVirtualId(), zone.getCloudName(),
                               " with time budget " + zoneUpgradeBudget));
        controller().serviceRegistry().configServer().nodeRepository().upgradeOs(zone.getVirtualId(), application.nodeType(),
                                                                                 target.osVersion().version(),
                                                                                 Optional.of(zoneUpgradeBudget));
    }

    @Override
    protected boolean convergedOn(OsVersionTarget target, SystemApplication application, ZoneApi zone) {
        return !currentVersion(zone, application, target.osVersion().version()).isBefore(target.osVersion().version());
    }

    @Override
    protected boolean expectUpgradeOf(Node node, SystemApplication application, ZoneApi zone) {
        return cloud.equals(zone.getCloudName()) && // Cloud is managed by this upgrader
               application.shouldUpgradeOs() &&     // Application should upgrade in this cloud
               canUpgrade(node);                    // Node is in an upgradable state
    }

    @Override
    protected Optional<OsVersionTarget> targetVersion() {
        // Return target if we have nodes in this cloud on a lower version
        return controller().osVersionTarget(cloud)
                           .filter(target -> controller().osVersionStatus().nodesIn(cloud).stream()
                                                         .anyMatch(node -> node.currentVersion().isBefore(target.osVersion().version())));
    }

    @Override
    protected boolean changeTargetTo(OsVersionTarget target, SystemApplication application, ZoneApi zone) {
        if (!application.shouldUpgradeOs()) return false;
        return controller().serviceRegistry().configServer().nodeRepository()
                           .targetVersionsOf(zone.getVirtualId())
                           .osVersion(application.nodeType())
                           .map(currentTarget -> target.osVersion().version().isAfter(currentTarget))
                           .orElse(true);
    }

    private Version currentVersion(ZoneApi zone, SystemApplication application, Version defaultVersion) {
        return minVersion(zone, application, Node::currentOsVersion).orElse(defaultVersion);
    }

    /** Returns the available upgrade budget for given zone */
    private Duration zoneBudgetOf(Duration totalBudget, ZoneApi zone) {
        if (!spendBudget(zone)) return Duration.ZERO;
        long consecutiveZones = upgradePolicy.asList().stream()
                                             .filter(parallelZones -> parallelZones.stream().anyMatch(this::spendBudget))
                                             .count();
        return totalBudget.dividedBy(consecutiveZones);
    }

    /** Returns whether to spend upgrade budget on given zone */
    private boolean spendBudget(ZoneApi zone) {
        if (!zone.getEnvironment().isProduction()) return false;
        if (controller().zoneRegistry().systemZone().getVirtualId().equals(zone.getVirtualId())) return false; // Controller zone
        return true;
    }

    /** Returns whether node is in a state where it can be upgraded */
    public static boolean canUpgrade(Node node) {
        return upgradableNodeStates.contains(node.state());
    }

    private static String name(CloudName cloud) {
        return capitalize(cloud.value()) + OsUpgrader.class.getSimpleName(); // Prefix maintainer name with cloud name
    }

    private static String capitalize(String s) {
        if (s.isEmpty()) {
            return s;
        }
        char firstLetter = Character.toUpperCase(s.charAt(0));
        if (s.length() > 1) {
            return firstLetter + s.substring(1).toLowerCase();
        }
        return String.valueOf(firstLetter);
    }

}
