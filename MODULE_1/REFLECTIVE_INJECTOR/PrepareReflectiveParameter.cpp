/*
*   Sets up and injects low-level syscall stubs (NtAllocateVirtualMemory, NtProtectVirtualMemory,
*   NtFlushInstructionCache) directly into a remote process's memory for use by the ReflectiveLoader.
*   Also builds a parameter structure (`REFLECTIVE_FUNCTIONS`) that is passed to the ReflectiveLoader,
*   including syscall addresses and user-provided data.
*
*   Provides cleanup logic via `ReleaseAllRemote`, which ensures all memory regions allocated in
*   the remote process are properly released after injection is complete or fails.
*
*   Code has been redacted for ethical and security reasons.
*   136 LOC
*/