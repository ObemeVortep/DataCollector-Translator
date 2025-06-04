/*
 * This source file implements a TLS-based HTTP file download mechanism using dynamically resolved system APIs:
 * - Loads and manages network and security libraries manually to avoid static linking and reduce detection surface.
 * - Establishes outbound TLS connections with Schannel and Winsock via function pointer dispatch.
 * - Performs a custom TLS handshake loop with fine-grained state handling using SSPI.
 * - Sends HTTP/1.1 GET requests and processes streamed server responses, extracting file content from the response body.
 * - Supports partial reads, in-place decryption, TLS shutdown, and resource cleanup.
 *
 * Code has been redacted for ethical and security reasons.
 * 498 LOC
 */