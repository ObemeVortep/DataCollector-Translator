/*
 * This header defines low-level syscall interface declarations using dynamic system call numbers:
 * - Declares external wrappers for key NT system services, each accepting a syscall number as a final argument.
 * - Supports memory management, process and thread manipulation, system information queries, and execution control.
 * - Provides compatibility with dynamically generated syscall numbers resolved at runtime.
 * - Ensures ordering guarantees by including syscall number definitions after all relevant declarations.
 * - Uses PHNT for type definitions and constants aligned with Windows internals.

 * Code has been redacted for ethical and security reasons.
 * 155 LOC
 */