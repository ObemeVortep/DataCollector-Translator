/*
 * Aggregates core module headers required for operations using low-level system calls.
 *
 * This header:
 * - Defines environment setup and syscall wrappers via `Assembly.h` and `Syscall` infrastructure.
 * - Retrieves OS version to determine correct syscall numbers at runtime.
 * - Includes custom memory management, registry access, and file manipulation routines that avoid CRT.
 * - Supports SID parsing, registry entry discovery and modification, reflective data injection, and
 *   dynamic path construction in user directories.
 *
 * Code has been redacted for ethical and security reasons.
 * 18 LOC
 */