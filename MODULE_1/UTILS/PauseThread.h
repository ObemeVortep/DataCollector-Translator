/*
*   Provides inlined implementations for controlled thread suspension using native syscalls:
*   - `PauseThread(msMin, msRandom)` pauses for a random interval between msMin and msMin + msRandom.
*   - `PauseThread(ms)` pauses for a fixed duration.
*   Relies on dynamically resolved syscall numbers for `NtQuerySystemTime` and `NtDelayExecution`.
*
*   Code has been redacted for ethical and security reasons.
*   27 LOC
*/