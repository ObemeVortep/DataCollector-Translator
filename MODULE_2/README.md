## 🧩 MODULE_2 – Persistence and Deployment Handler

This module is responsible for **establishing persistence** of the client loader (MODULE_3) on the target machine. It runs entirely in-memory and is invoked by MODULE_1 through reflective injection.

---

### 💡 Responsibilities

- Parses configuration and payload buffer passed from MODULE_1.
- Analyzes Windows Registry to identify potential persistence vectors.
- Implements two persistence strategies.
- Conditionally modifies the loader binary to ensure proper autoload behavior.
- Writes the modified binary to disk (e.g., `%APPDATA%`, `%TEMP%`), depending on strategy.

---

### 🧠 Key Notes

- Accepts a memory buffer from MODULE_1 which contains the future loader (MODULE_3).
- Uses a custom implementation of a map-like structure (`MyMap`) to store and analyze registry entries — specifically built to avoid dependency on the CRT.
- Includes a custom minimal reflective loader.
- Makes use of internal utility classes for:
  - Windows version detection (via direct PEB parsing).
  - Manual registry traversal and editing.
  - Controlled memory allocation, pausing, and cleanup.

> ⚠️ MODULE_2 does **not run standalone** – it’s reflectively injected by MODULE_1 into a legitimate process and executed from memory.

---

### 🔧 Technologies & Concepts Used

- **C++17**
- **Manual Windows Registry manipulation**
- **Lightweight design**
  - Executable size under 20KB (0 imports).
- **Custom memory structures**
  - Lightweight key-value store (no STL).
- **File system control**
  - Dynamically determines safe and stealthy save locations.
- **Reflective invocation**
  - Designed to be executed directly in memory after injection.
> Implementation details can be discussed or demonstrated in a personal setting.
---

### ⚠️ Source Code

All source files have been replaced with summarized descriptions (including line counts) for safety reasons.  
Full code can be reviewed and demonstrated during a personal interview to verify authorship and intent.
