/*
 * This header defines the prototype bindings for a dynamic syscall invocation system on Windows.
 * It exposes function signatures for low-level NT system services where syscall numbers are passed
 * explicitly as arguments or inferred via stack offsets in assembly stubs.
 *
 * - Enables stealthy, syscall-based API access by bypassing user-mode DLLs like ntdll.dll.
 * - Compatible with reflective loaders that require minimized static imports.
 * - Supports multiple Windows versions by abstracting syscall number resolution.
 * - Ensures compatibility with PHNT (Windows Native API headers).
 *
 * Code has been redacted for ethical and security reasons.
 * 190 LOC
 */