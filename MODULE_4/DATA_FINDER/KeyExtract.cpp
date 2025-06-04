/*
 * This source file contains functionality for parsing, decoding, and decrypting key material embedded in application configuration files:
 * - Dynamically resolves required cryptographic routines from system libraries at runtime.
 * - Extracts specific fields from loosely structured JSON-like blobs.
 * - Performs in-place Base64 decoding with custom table initialization.
 * - Applies DPAPI (Windows Data Protection API) to decrypt key material using system context.
 * - Supports versioned key formats and compensates for header-specific offsets in the encoded data.
 *
 * Code has been redacted for ethical and security reasons.
 * 114 LOC
 */