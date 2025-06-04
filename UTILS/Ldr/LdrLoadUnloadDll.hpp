/*
 * This header defines a helper for loading DLLs by wide-character string without CRT dependencies:
 * - Wraps LdrLoadDll in a minimal interface using InitUnicodeString (from this UTILS).
 * - Supports manual loading of DLLs at runtime through direct function pointer invocation.
 * - Intended for use in low-level or custom loader environments.
 *
 * Code has been redacted for ethical and security reasons.
 * 31 LOC
 */