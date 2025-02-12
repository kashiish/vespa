// Copyright Verizon Media. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
package ai.vespa.feed.client;

/**
 * Signals that an error occurred during feeding
 *
 * @author bjorncs
 */
public class FeedException extends RuntimeException {

    public FeedException(String message) { super(message); }

    public FeedException(String message, Throwable cause) { super(message, cause); }

    public FeedException(Throwable cause) { super(cause); }

}
