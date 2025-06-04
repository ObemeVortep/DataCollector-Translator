## 🧭 Personal Journey

> ⚠️ If you're interested in the background of this project and how I stayed motivated for 5 months — feel free to read this section.  
> If not, you can skip ahead to the next section about the description of the project.

I've been familiar with programming for quite a while: at 15 I was learning Python, at 16 I was building websites with HTML/CSS, and at 17 I played around with JavaScript scripts. But none of it was serious — just an hour or two a day, and I'd quit after a few weeks.

In February 2024, things started to change. I began reading serious books on psychology and deliberately reduced time spent on entertainment. Around that time, I came back to programming and started learning C++.

In March, two close friends and I came up with a small business idea. One of them acted as an investor, and the other and I were doing the main work. Programming took a back seat for a while.

From March to June, we worked 6–10 hours almost every day, driven only by faith in the idea. Nothing really worked out, but we kept pushing. Just to developers alone, we paid over $3,000 in those three months, even though we barely earned anything ourselves.

On June 1st, I decided to leave the project. It was one of the most important experiences of my life. I realized I was capable of working 8 hours a day, powered purely by discipline and vision.

Right after that, my friend and I tried to build a small game using C#. It didn’t go far and fell apart quickly — but something bigger was already growing in my mind. A heavy, ambitious idea. One I genuinely wanted to bring to life. That’s how this project began.

In July, I committed to learning C++ seriously, focusing on low-level understanding. No previous course ever felt like this. I was taking German courses during the day, and spending evenings studying C++. I pushed myself to study at least 4 hours a day — and up to 10–12 on weekends, sometimes with the help of energy drinks. I especially remember the Saturday I spent completely rewriting my code to move from a functional to an OOP approach. That was a great moment.

To be honest, this project became something much more than just “learning programming.”  
It was a fight — with laziness, doubt, distractions.  
And I’m proud that I didn’t give up and made it to the end. Even if it took me five whole months.

**Thank you for reading the story behind my first big project!**  
Up next, you'll see what exactly I managed to learn and build during this time.

## 💡 Project Description

A lightweight client-server system designed to monitor and analyze user behavior on local machines.

The main technical focus was on ensuring minimal detectability and smooth operation in constrained or monitored environments. This involved working with low-level OS APIs, exploring virtualization detection techniques, simulating human-like activity patterns, and applying methods to avoid common behavioral flags typically used by security tools.

The project was an in-depth study of how real-world software adapts to various execution conditions, with emphasis on stealth, adaptability, and performance under system restrictions.

## 📁 Repository Structure

The project consists of five client-side modules (MODULE_1 to MODULE_5), one server application (SERVER), and a set of utility headers (UTILS).

### 🔹 Overview of modules and their responsibilities:

- **MODULE_1** – Installer for the client application.
- **MODULE_2** – Payload downloaded by MODULE_1; performs initial operations during setup.
- **MODULE_3** – The main client application written to disk after MODULE_1 completes.
- **MODULE_4** – Payload downloaded and executed by MODULE_3 on startup.
- **MODULE_5** – Another payload downloaded and executed by MODULE_3 on startup.
- **SERVER** – Backend application that MODULE_5 connects to during execution.
- **UTILS** – A collection of `.hpp` utility files used to simplify development of client modules.

Each component, including the server, is built as a standalone `.exe` file.

Due to the complexity and size of the system, a detailed breakdown of module functionality is provided in their respective subdirectories. This README provides only a high-level overview.

## 🛠️ Tech Stack & Topics Explored

This project gave me hands-on experience with a broad range of system-level concepts and tools, including:

- **C++17** — Core language for all modules and architecture.
- **Windows API** — Extensive use of OS-level functions and behavior control.
- **Assembly (x86)** — Wrote small routines to understand low-level operations and memory structure.
- **PE File Internals** — Worked with PE format parsing and structure interpretation.
- **COM Interfaces** — Studied how Windows components communicate.
- **Debugging** — Used Visual Studio and x64dbg for live memory and runtime analysis.
- **Multithreading** — Used mutexes, condition variables, and atomics for concurrency control.
- **Network Programming** — Built custom socket protocols, worked with libraries like WinHTTP and websockets.
- **Memory Management** — Manual allocation, and exploration of advanced topics like reflective DLL injection and IAT/inline hooking.
- **Windows DLLs** — Worked with modules like `ws2_32.dll`, `user32.dll`, `ntdll.dll`, and more.
- **Libraries** — Used libpng, zlib, GDI+, winhttp, websockets, and others.
- **Security & Evasion Techniques** — Studied system behavior, sandbox detection, and VM evasion patterns.
- **Tooling & Optimization** — Leveraged tools like ChatGPT and internal logging to optimize the dev workflow.

### ⚠️ **Note**:

All source files have been intentionally replaced with summarized descriptions (including line counts) for security reasons.  
Full source code can be provided and demonstrated in a personal interview to verify authorship and technical ownership.

