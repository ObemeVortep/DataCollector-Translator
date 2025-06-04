/*
 * This header defines a minimal helper for releasing memory using a low-level NT system call:
 * - Frees virtual memory in the current process via NtFreeVirtualMemory with dynamically resolved syscall number.
 * - Bypasses standard CRT and WinAPI memory management functions.
 *
 * Code has been redacted for ethical and security reasons.
 * 12 LOC
 */