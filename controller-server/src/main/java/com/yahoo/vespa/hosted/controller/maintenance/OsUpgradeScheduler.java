// Copyright Verizon Media. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
package com.yahoo.vespa.hosted.controller.maintenance;

import com.yahoo.component.Version;
import com.yahoo.config.provision.CloudName;
import com.yahoo.config.provision.zone.ZoneApi;
import com.yahoo.vespa.hosted.controller.Controller;
import com.yahoo.vespa.hosted.controller.versions.OsVersion;
import com.yahoo.vespa.hosted.controller.versions.OsVersionTarget;

import java.time.Duration;
import java.time.Instant;
import java.time.LocalDate;
import java.time.ZoneOffset;
import java.time.format.DateTimeFormatter;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * Automatically set the OS version target on a schedule.
 *
 * This is used in clouds where new OS versions regularly become available.
 *
 * @author mpolden
 */
public class OsUpgradeScheduler extends ControllerMaintainer {

    /** Trigger a new upgrade when the current target version reaches this age */
    private static final Duration MAX_VERSION_AGE = Duration.ofDays(45);

    /**
     * The interval at which new versions become available. We use this to avoid scheduling upgrades to a version that
     * may not be available yet
     */
    private static final Duration AVAILABILITY_INTERVAL = Duration.ofDays(7);

    private static final DateTimeFormatter VERSION_DATE_PATTERN = DateTimeFormatter.ofPattern("yyyyMMdd");

    public OsUpgradeScheduler(Controller controller, Duration interval) {
        super(controller, interval);
    }

    @Override
    protected double maintain() {
        Instant now = controller().clock().instant();
        if (!canTriggerAt(now)) return 1.0;
        for (var cloud : supportedClouds()) {
            Optional<Version> newTarget = newTargetIn(cloud, now);
            if (newTarget.isEmpty()) continue;
            controller().upgradeOsIn(cloud, newTarget.get(), upgradeBudget(), false);
        }
        return 1.0;
    }

    /** Returns the new target version for given cloud, if any */
    private Optional<Version> newTargetIn(CloudName cloud, Instant now) {
        Optional<Version> currentTarget = controller().osVersionTarget(cloud)
                                                      .map(OsVersionTarget::osVersion)
                                                      .map(OsVersion::version);
        if (currentTarget.isEmpty()) return Optional.empty();
        if (!hasExpired(currentTarget.get())) return Optional.empty();
        String qualifier = LocalDate.ofInstant(now.minus(AVAILABILITY_INTERVAL), ZoneOffset.UTC)
                                    .format(VERSION_DATE_PATTERN);
        return Optional.of(new Version(currentTarget.get().getMajor(),
                                       currentTarget.get().getMinor(),
                                       currentTarget.get().getMicro(),
                                       qualifier));
    }

    /** Returns whether we should upgrade from given version */
    private boolean hasExpired(Version version) {
        String qualifier = version.getQualifier();
        if (!qualifier.matches("^\\d{8,}")) return false;

        String dateString = qualifier.substring(0, 8);
        Instant now = controller().clock().instant();
        Instant versionDate = LocalDate.parse(dateString, VERSION_DATE_PATTERN)
                                       .atStartOfDay(ZoneOffset.UTC)
                                       .toInstant();
        return versionDate.isBefore(now.minus(MAX_VERSION_AGE));
    }

    /** Returns the clouds where we can safely schedule OS upgrades */
    private Set<CloudName> supportedClouds() {
        return controller().zoneRegistry().zones().reprovisionToUpgradeOs().zones().stream()
                           .map(ZoneApi::getCloudName)
                           .collect(Collectors.toUnmodifiableSet());
    }

    private boolean canTriggerAt(Instant instant) {
        int hourOfDay = instant.atZone(ZoneOffset.UTC).getHour();
        int dayOfWeek = instant.atZone(ZoneOffset.UTC).getDayOfWeek().getValue();
        // Upgrade can only be scheduled between 07:00 and 12:59 UTC, Monday-Thursday
        return hourOfDay >= 7 && hourOfDay <= 12 &&
               dayOfWeek < 5;
    }

    private Duration upgradeBudget() {
        return controller().system().isCd() ? Duration.ofHours(1) : Duration.ofDays(14);
    }

}
