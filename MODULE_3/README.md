## 🧩 MODULE_3 – Loader & Deployment Orchestrator

This module is the **central loader** that initializes and orchestrates long-term components of the system.  
Originally, all five modules were implemented inside this single executable.  
However, for better modularity and stealth, the project was split — leaving this component to handle only the minimal core logic required to orchestrate long-term execution.

---

### 💡 Responsibilities

- Launches the mimicked user-facing application to maintain continuity.
- Performs runtime environment validation and basic anti-analysis checks.
- Downloads and extracts two critical long-running components:
  - **MODULE_4** – a monitoring utility to ensure continuity and restart-on-failure.
  - **MODULE_5** – the core operational logic (e.g., client, worker).
- Transfers MODULE_5 as a memory buffer to MODULE_4.
- Injects MODULE_4 reflectively into a trusted system process.

> ⚠️ This module is responsible for **initiating the long-term lifecycle** of the system.

---

### 🧠 Key Notes

- Designed for minimal disruption: launches a decoy or host application via `Mimic` class for visual consistency.
- Employs a **custom reflective injector** to load MODULE_4:
  - Built using direct system calls.
  - Avoids runtime API lookups or imports during injection.
  - Transfers **MODULE_5** as a parameter through an in-memory structure.
- Built-in sandbox detection and pause logic prevent premature execution in analysis environments.

---

### 🔧 Technologies & Concepts Used

- **C++17**
- **TLS-enabled downloader**  
  - Built from scratch using `ws2_32.dll` and `SspiCli.dll` (Schannel).
- **7z archive unpacking**  
  - Extracts modules from memory using internal decompression engine.
- **Custom syscall-based reflective injection**  
  - Performs clean, in-memory deployment with no disk writes for injected modules.
- **Memory control**  
  - Manual memory allocation and buffer relocation before injection.
- **Execution decoys**  
  - Uses customizable mimicry targets for stealth and misdirection.

> Implementation details can be discussed or demonstrated in a personal setting.

---

### 📦 Deployed Components

- **MODULE_4** – Monitors target module execution and ensures persistence during runtime.
- **MODULE_5** – The main runtime component (e.g., data collection, task execution).  
  Both are loaded from secure external storage and executed in-memory.

---

### ⚠️ Source Code

All source files have been replaced with summarized descriptions for safety reasons.  
Full code can be reviewed and demonstrated during a personal interview to verify authorship and engineering quality.
