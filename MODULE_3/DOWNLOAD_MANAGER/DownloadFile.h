/*
 * This header defines types, constants, and dynamic API prototypes for secure in-memory file transfer over TLS:
 * - Declares the `tls_socket` structure to manage TLS state, buffers, and stream metadata.
 * - Specifies typedefs for dynamically resolving functions from NTDLL, SSPI, and Winsock libraries.
 * - Covers operations for TLS negotiation, credential handling, message encryption/decryption, and network transport.
 * - Avoids static linking to maintain runtime flexibility and reduce binary footprint.
 * - Uses lightweight Windows headers and disables unnecessary macros for cleaner inclusion.
 *
 * Code has been redacted for ethical and security reasons.
 * 138 LOC
 */