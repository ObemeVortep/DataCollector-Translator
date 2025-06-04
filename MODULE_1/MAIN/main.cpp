/*
 * Main controller module responsible for initializing the runtime environment,
 * resolving dependencies, and coordinating the loading and execution of auxiliary components.
 *
 * Responsibilities include:
 * - Resolving core system routines (e.g., LdrLoadDll) via hash lookup.
 * - Detecting installed software (e.g., Microsoft Word) by probing known installation paths.
 * - Determining the Windows build version directly via PEB inspection.
 * - Downloading multiple 7z-compressed resources from a remote HTTPS endpoint into memory.
 * - Extracting archived content in-memory using a lightweight 7z decompression routine.
 * - Preparing payload buffers and injecting them reflectively into a remote process.
 * - Allocating and writing runtime parameters for later use by injected components.
 * - Performs anti-sandbox checks before execution of payload logic.
 * - Optionally evaluating the execution context using environment-based heuristics.
 *
 * This file acts as the primary entry point and governs execution flow across all modules.
 *
 * Code has been redacted for ethical and security reasons.
 * 377 LOC
 */