/*
 * Implements low-level manipulation of Windows Registry entries using direct system calls,
 * avoiding CRT and external libraries entirely.
 *
 * Functionality includes:
 * - Parsing the current user's SID into a formatted registry path string by extracting identifier
 *   authority and sub-authorities using internal NTDLL routines.
 * - Opening handles to registry keys with precise permissions via `NtOpenKeyEx`.
 * - Enumerating values in a registry key and conditionally extracting strings or binary flags,
 *   populating a custom key-value map structure (`MyMap`) to hold this data.
 * - Editing specific REG_SZ values to update execution paths of entries directly in the registry.
 * - Writing REG_BINARY data to enable auto-start behavior for specific entries by setting a binary
 *   marker (e.g., 0x02).
 * - Allocating and releasing memory using `NtAllocateVirtualMemory` and `NtFreeVirtualMemory`,
 *   ensuring full independence from the Windows runtime.
 *
 * Code has been redacted for ethical and security reasons.
 * 182 LOC
 */
