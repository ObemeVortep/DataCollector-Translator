/*
 * Implements a custom, position-independent reflective DLL loader designed for full independence from
 * the Windows runtime environment (CRT) and static import tables.
 *
 * Core features:
 * - Resolves its own image base by scanning backward from the return address, parsing PE headers manually.
 * - Uses externally supplied function pointers (`NtAllocateVirtualMemory`, `NtProtectVirtualMemory`,
 *   `NtFlushInstructionCache`) to avoid reliance on standard imports.
 * - Loads headers and sections into newly allocated memory and applies necessary base relocations.
 * - Skips import directory handling entirely—assumes the binary has no imports by design.
 * - After relocation, flushes instruction cache and restores proper memory protections on each section
 *   to avoid RWX usage.
 * - Transfers control to the image’s entry point with a custom reason code and user-defined parameter.
 *
 * This implementation is lightweight, flexible, and avoids common runtime dependencies, making it well-suited
 * for scenarios where stealth, minimal footprint, or tight control over memory layout is desired.
 *
 * Code has been redacted for ethical and security reasons.
 * 252 LOC
 */