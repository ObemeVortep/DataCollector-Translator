## 🧩 MODULE_4 – Process Monitor and Recovery Engine

This module is responsible for **maintaining the stability and resilience** of the system during runtime.  
It monitors the state of injected processes and ensures reinitialization when required, acting as a lightweight supervisor component.

---

### 💡 Responsibilities

- Accepts and realigns a memory buffer from MODULE_3.
- Initializes and interacts with a specialized runtime data handler.
- **Collects specific runtime data**, which is embedded into a secure structure.
- Injects the core logic module (MODULE_5) into active user-space processes.
- Monitors injected processes and automatically re-injects on termination.
- Operates in a loop with randomized delays to ensure reliability and stealth.

---

### 🧠 Key Notes

- This module is reflectively injected by MODULE_3 into a long-lived user process.
- Uses a **runtime data struct** containing user-session-dependent data required for MODULE_5 to function correctly.
- Data struct may include application-level context and cryptographic metadata gathered prior to injection.
- Supports **dynamic target discovery**.
- Reacts gracefully to environment changes:
  - If the target process is terminated, the monitor attempts reinjection after a delay.
- Fully autonomous, requiring no user interaction or persistent file presence.

---

### 🔧 Technologies & Concepts Used

- **C++17**
- **Direct system calls** (syscalls) for memory allocation and writing.
- **Lightweight design**
  - Executable size under 30KB (0 imports).
- **Manual process injection**:
  - Custom reflective loader and injector designed for stealth and reliability.
- **PEB-based OS version detection**
- **Process monitoring loop**:
  - Uses `NtWaitForSingleObject` with dynamic sleep intervals.
- **Custom runtime data structures**:
  - Secure memory container passed to MODULE_5.
- **Target-specific injection routing**:
  - Process selection based on binary name and internal description.

> Implementation details can be discussed or demonstrated in a personal setting.

---

### ⚠️ Source Code

All source files have been replaced with summarized descriptions (including line counts) for safety reasons.  
Full code can be reviewed and demonstrated during a personal interview to verify authorship and technical ownership.
