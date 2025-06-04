/*
 * This source file implements reflective injection of a memory-loaded DLL into a remote process:
 * - Locates a target process by matching image name and optionally verifying its command-line arguments.
 * - Reads remote process memory structures (PEB, process parameters) using NT syscalls to validate criteria.
 * - Allocates and writes injection payloads into the target process using low-level memory management APIs.
 * - Prepares optional reflective injection parameters and invokes the DLL's loader within the remote context.
 * - Avoids use of standard WinAPI or loader functions, relying entirely on direct system call stubs.
 *
 * Code has been redacted for ethical and security reasons.
 * 141 LOC
 */