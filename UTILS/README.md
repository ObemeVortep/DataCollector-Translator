## 📦 UTILS

### 🔹 Purpose

A collection of `.hpp` utility headers used across client modules to simplify development and reduce code duplication. These utilities are designed to work in both CRT-enabled and CRT-free environments, depending on module needs.

### 🧩 Structure

The folder is organized into several logical submodules:

- **Debug** – Lightweight debugging helpers, useful especially when CRT or `user32.dll` is unavailable.
- **FileSystem** – File operations like checking file existence, running executables, and saving data to disk.
- **Hashes** – String hashing functions and definitions, used to obfuscate string literals and identify in-memory modules.
- **Ldr** – Wrappers and typedefs for low-level dynamic loading via `LdrLoadDll` and `LdrUnloadDll`.
- **Memory** – Safe memory release utilities.
- **Parameters** – Shared data structures and buffer handling mechanisms for inter-module communication.
- **Strings** – Functions for string manipulation, especially useful when CRT is stripped out.
- **Syscall** – Tools for detecting OS version, syscall numbers, and related low-level identifiers.

### 🔒 Source Code

Source files have been replaced with file-level summaries and line counts for security reasons.  
Full source code is available for demonstration in a personal interview.
