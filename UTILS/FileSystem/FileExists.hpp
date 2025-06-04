/*
 * This header provides an implementation of a file existence check without relying on the C runtime:
 * - Constructs a native NT path from the input.
 * - Uses a low-level syscall to query file attributes directly.
 * - Returns a boolean indicating whether the file exists.
 *
 * Code has been redacted for ethical and security reasons.
 * 39 LOC
 */