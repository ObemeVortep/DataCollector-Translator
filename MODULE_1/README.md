## 🧩 MODULE_1 – Initial Setup and Injection

This module serves as the **initial launcher** of the system. Its purpose is to prepare the environment and pass control to the core logic implemented in other components.

---

### 💡 Responsibilities

- Verifies the environment (e.g., Windows version, basic conditions).
- Downloads and extracts required components from a remote source.
- Initializes a decoy document file for distraction and flow continuity.
- Performs basic anti-analysis checks (e.g., sandbox detection).
- Reflectively injects **MODULE_2** into a trusted system process (e.g., `explorer.exe`).
- Passes a memory buffer containing **MODULE_3** to MODULE_2, which is responsible for writing it to disk.

> ⚠️ This module **does not execute any primary logic** itself.  
> Its sole task is to transfer control to MODULE_2 and pass necessary payloads.

---

### 📦 Downloaded Components

- **MODULE_2** – Responsible for establishing persistence and writing the loader (MODULE_3) to disk.
- **MODULE_3** – The future loader component. Not executed at this stage; passed as data.
- **Decoy .docx file** – Opened as part of the initial flow for natural appearance.

---

### 🔧 Technologies & Concepts Used

- **C++17**
- **Network communication over HTTPS**:
  - Implemented using low-level `ws2_32.dll` and `SspiCli.dll` via direct system calls.
  - TLS 1.2 support handled through Schannel and SSPI APIs.
- **Custom 7z archive unpacker**:
  - Extracts modules directly from memory.
- **Reflective injection**:
  - Custom syscall-based loader for stealthy in-memory module execution.
- **System memory management**:
  - Allocates memory regions manually and transfers control between modules.
- **Basic environment scanning**:
  - Includes custom class to detect signs of virtualization or sandboxes.
> Implementation details can be discussed or demonstrated in a personal setting.
---

### 🧠 Key Notes

- MODULE_1 prepares both MODULE_2 (injected and executed) and MODULE_3 (held in memory).
- Execution responsibility is explicitly handed over to MODULE_2. 
- Designed for minimal footprint and fast transfer of control.

---

### ⚠️ Source Code

All source files have been replaced with summarized descriptions for safety reasons.  
Full code can be reviewed and demonstrated during a personal interview to verify authorship.
