/*
*   Implementation of the reflective injection engine.
*   - `CheckProcessCommandLine` validates the target process's command-line against a specified substring.
*   - `Inject` identifies the appropriate target process by name and command-line match,
*     prepares the injection buffer, and performs reflective DLL injection using `LoadRemoteLibraryR`.
*   - Makes use of low-level NT syscalls and internal structures (PEB, process parameters).
*
*   Code has been redacted for ethical and security reasons.
*   140 LOC
*/