# 🐚 42 Piscine – Re‑Implementation

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Status](https://img.shields.io/badge/Status-C00_to_C08_Completed-success.svg)
![School 42](https://img.shields.io/badge/42-Piscine-black.svg)
![Platform](https://img.shields.io/badge/Platform-Linux%2FUnix-lightgrey.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)


### 🚀 A Refined Approach to the 42 Curriculum

A fresh take on the **42 / 1337 Piscine (Pool)** projects: re‑coded, re‑structured, and re‑imagined.

This repository documents my journey of revisiting the curriculum’s foundational exercises in **C programming, algorithms, and problem‑solving**. Having already experienced the Piscine, this re-implementation focuses on:

- ✨ Writing **cleaner, maintainable, and efficient code**.
- 📚 Strengthening **fundamentals in memory management & logic**.
- 🔄 Transforming practice projects into **long‑term references**.
- 🛠 Adhering to strict coding standards (The Norm).

---

## 📖 About the Piscine
The **Piscine** is an intensive 4‑week coding bootcamp at [School 42](https://42.fr) designed to test adaptability and raw problem‑solving skills. Students dive into **C programming, shell scripting, and algorithms** without prior instruction.

By revisiting these projects up to **Module C08**, I am not just completing exercises; I am refining the way I think about low-level programming.

---

## 📊 Modules & Progress
Below is the status of the modules currently implemented in this repository.

| Module | Topic Focus | Status |
| :--- | :--- | :---: |
| **Shell 00** | File System, Permissions, SSH | ✅ |
| **Shell 01** | Environment variables, Shell scripting | ✅ |
| **C 00** | Basics, Write, Char operations | ✅ |
| **C 01** | Pointers, Arithmetic, Swapping values | ✅ |
| **C 02** | Strings, Arrays, Manipulation | ✅ |
| **C 03** | String functions (concatenation, comparison) | ✅ |
| **C 04** | Parsing, Logic, Base conversion (atoi, itoa) | ✅ |
| **C 05** | Mathematical algorithms (Factorial, Fibonacci, Sqrt) | ✅ |
| **C 06** | Program Arguments (argv, argc) | ✅ |
| **C 07** | Memory Allocation (malloc, free, strdup) | ✅ |
| **C 08** | Header files, Structures, Pre-processor | ✅ |

---

## 🗂️ Repository Structure
The repository is organized by module, mirroring the standard 42 workflow.

```text
.
├── Shell00/
├── Shell01/
├── C00/
│   ├── ex00/
│   ├── ex01/
│   └── ...
├── C01/
├── ...
├── C07/
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   └── ex03/
└── C08/
    ├── ex00/
    ├── ex01/
    ├── ex02/
    ├── ex03/
    ├── ex04/
    └── ex05/
```

---

## 🧑‍💻 How to Use

### 1. Clone the repository
```bash
git clone https://github.com/UzalSahn/42_Pool.git
cd 42_Pool
```

### 2. Compile and Run
Navigate into any module (e.g., C04) and compile using `gcc` (or `cc`). Ensure you use the standard flags for strict error checking.

**Example for C04:**
```bash
cd C04/ex03
gcc -Wall -Wextra -Werror -o ft_atoi main.c ft_atoi.c
./ft_atoi "   ---+--+1234ab567"
```
*Note: You may need to create your own `main.c` files to test specific functions, as the Piscine often requires submitting only the function file.*

---

## 🔍 Why This Repo Matters
This repo is useful if you’re looking for:
*   **Reference Solutions:** Clean re‑implementations of C00-C08.
*   **Practice:** Drills for pointers, memory allocation, and structures.
*   **Review:** A resource for new students or those preparing for exams.

## 🦇 Final Note
Re‑implementing the Piscine is more than a redo. It’s a code workout routine: **learn → review → refine → repeat**.

If you’re a fellow 42 student, a beginner in C, or a coding enthusiast, I hope this repo helps with inspiration and study guidance.

> 💡 **"Keep coding, keep refining—the Piscine never really ends."** 🐬
