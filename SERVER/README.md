## 🖧 SERVER – Secure Telemetry Receiver

This module serves as the **central backend node** responsible for handling incoming runtime telemetry from client systems.  
It runs continuously, listening for incoming connections, extracting contextual payloads, and storing results locally for analysis or further processing.

---

### 💡 Responsibilities

- Listens for incoming client connections on multiple interfaces:
  - **Port 443 (TCP)** for structured telemetry sessions.
  - **Port 8080 (UDP)** for frame-based, event-driven payloads.
- Processes runtime data transmitted by MODULE_5.
- Supports optional decryption workflows for incoming records.
- Efficiently parses, transforms, and stores incoming payloads:
  - Session metadata.
  - Time-bound visual context streams.
- Organizes output in a structured, per-client directory format.

---

### 🧠 Key Notes

- Operates as a **multi-threaded listener**:
  - TCP listener handles structured packets with encryption metadata.
  - UDP listener accepts real-time visual telemetry or status messages.
- Uses **SQLite** in-memory handling for transient telemetry storage.
- Implements **OpenSSL-based decryption** pipeline to parse and verify submitted payloads.
- Automatically extracts, transforms, and writes content to structured folders, grouped by session and source.
- Can distinguish between sources using **runtime tags** and optional session keys.

---

### 🔧 Technologies & Concepts Used

- **C++17**
- **WSA sockets**
  - Threaded socket handling for parallel data flows.
- **SQLite3 (in-memory mode)**
  - Used to deserialize and process structured data (e.g., credential/session tables).
- **OpenSSL (AES-256-GCM)**
  - Handles decryption and validation of sensitive payloads.
- **GCM-tag verification**
  - Ensures authenticity of submitted encrypted blobs.
- **Custom packet handling logic**
  - Designed for high-throughput session processing.
- **Dynamic file I/O**
  - Output routing based on client IP, session type, and browser tag.
- **Lightweight architecture**
  - All operations performed in-memory before output is committed to disk.
> Implementation details can be discussed or demonstrated in a personal setting.

---

### ⚠️ Source Code

For confidentiality and safety reasons, full source files have been replaced with summarized descriptions.  
Cod
