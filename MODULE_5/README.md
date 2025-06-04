## 🧩 MODULE_5 – Runtime Data Collector & Communication Node

This module contains the **core runtime logic** of the system.  
Its purpose is to observe runtime behavior, extract contextual session metrics, and securely communicate with a remote backend.

---

### 💡 Responsibilities

- Hooks critical network-related system APIs at runtime.
- Detects active session patterns inside user-space applications.
- Collects and transmits runtime telemetry based on trigger conditions:
  - Uses **TCP (port 443)** for structured communication packets.
  - Uses **UDP (port 8080)** for real-time frame-based telemetry.
- Batches and compresses captured data before transmission.
- Operates entirely in memory — no disk writes, no persistence artifacts.

---

### 🧠 Key Notes

- This is the **final stage** in the modular pipeline, acting as a real-time communication node.
- Reflectively injected by MODULE_4 into designated user processes.
- Uses **inline hooking** techniques to attach lightweight monitors to selected APIs (`send`, `recv`, `sendto`, `recvfrom`).
- Activates only during genuine session activity — **no idle polling** or background scans.
- Visual telemetry is handled using **GDI+** with memory-optimized frame capture.
- Cryptographic workflows rely on session-level context and keying material from MODULE_4.

---

### 🔧 Technologies & Concepts Used

- **C++17**
- **Lightweight design**
  - Executable size under 30KB (0 imports).
- **Manual process injection**:
  - Custom reflective loader and injector designed for stealth and reliability.
- **Inline API Hooking**
  - Low-level interception of network I/O.
- **TLS-secured communication** over TCP 443
  - Managed via raw sockets (`ws2_32.dll`), bypassing higher-level stacks.
- **Context-aware visual telemetry streaming over UDP 8080**
  - Used for lightweight visual telemetry with minimal blocking.
- **User-aware data capture**
  - Triggered only when runtime activity is detected.
- **AES encryption routines**
  - Session-specific keys injected dynamically for transport-layer protection.
- **Context-aware visual telemetry grabbing & compression**
  - Custom logic built on **GDI+** for real-time visual stream packaging.
> Implementation details can be discussed or demonstrated in a personal setting.

---

### 🔄 System Role

- Complements MODULE_4 by handling all outbound telemetry and communication.
- Activated only within qualified runtime environments, avoiding background presence on idle systems.
- Operates under minimal system load, prioritizing **stealth and responsiveness**.

---

### ⚠️ Source Code

All source files have been replaced with summarized descriptions (including line counts) for safety and confidentiality.  
Full code can be reviewed and verified during a private session to confirm authorship and technical ownership.
