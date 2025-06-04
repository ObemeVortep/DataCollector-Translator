/*
 * This header declares prototypes for low-level system calls using dynamic syscall number resolution:
 * - Defines function macros and extern declarations for a wide set of NT system services.
 * - Each function accepts an additional parameter for specifying the syscall ID at runtime.
 * - Ensures compatibility with multiple Windows versions by using version-indexed syscall number arrays.
 * - Facilitates syscall invocation from custom runtime environments with minimal dependency overhead.
 *
 * Code has been redacted for ethical and security reasons.
 * 194 LOC
 */