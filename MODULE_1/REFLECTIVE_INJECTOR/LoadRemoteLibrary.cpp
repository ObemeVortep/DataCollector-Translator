/*
*   Implements reflective DLL injection logic:
*   - Locates the `ReflectiveLoader` function inside the provided DLL buffer.
*   - Converts RVA (Relative Virtual Address) to file offset for parsing PE headers.
*   - Injects the DLL into a remote process using low-level NT system calls.
*   - Allocates memory in the target process, writes the DLL, and starts a thread at ReflectiveLoader.
*   - Frees all remote memory buffers after injection.
*
*   Code has been redacted for ethical and security reasons.
*   149 LOC
*/