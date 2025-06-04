/*
 * This source file provides helper routines for preparing and cleaning up reflective injection fields:
 * - Implements cleanup logic to release all remote memory allocations made during the injection process.
 * - Prepares dynamically encoded syscall stubs for NtAllocateVirtualMemory, NtProtectVirtualMemory, and NtFlushInstructionCache.
 * - Resolves syscall numbers at runtime and embeds them into raw bytecode for execution in a remote context.
 * - Allocates memory in the target process, writes syscall stubs and parameter structures, and marks memory executable.
 * - Assembles all required fields into a structured ReflectiveParameter block for use by the reflective loader.
 *
 * Code has been redacted for ethical and security reasons.
 * 136 LOC
 */