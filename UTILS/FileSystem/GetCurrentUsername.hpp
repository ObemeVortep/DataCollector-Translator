/*
 * This header provides functions to retrieve the current user's username without using the C runtime:
 * - Accesses the process environment block (PEB) directly.
 * - Parses the environment block to locate the USERNAME variable.
 * - Copies the extracted username into the provided buffer.
 * - Supports both implicit and explicit PEB access variants.
 *
 * Code has been redacted for ethical and security reasons.
 * 62 LOC
 */