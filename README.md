# CPP Modules - 42 Abu Dhabi

This repository contains my solutions for the C++ modules at 42 Abu Dhabi. 
The goal of these exercises is to transition from Procedural Programming (C) 
to Object-Oriented Programming (C++).

## 📂 Projects Overview

| Cpp00 | Name | Description | Key Concepts |
| :--- | :--- | :--- | :--- |
| **ex00** | Megaphone | Basic I/O and strings | `std::cout`, `std::string` |
| **ex01** | My Awesome PhoneBook | First class implementation | Class nesting, access specifiers |
| **ex02** | The Job of Your Dreams | Log parsing | Static members, timestamps |

### 💡 Key Concept: `std::string`

Why i used 'std::string' in this module, we move away from C-style `char *` strings to `std::string`. This introduces several core OOP principles:

* **Encapsulation:** `std::string` is an object that packages both text data and management tools (like `.length()`) together.
* **Auto-Memory Management:** The object handles its own memory allocation and deallocation dynamically, reducing leaks and buffer overflows.
* **Operator Overloading:** Allows natural operations like `+` for concatenation and `==` for comparison.
* **Safety:** Built-in methods provide structured ways to access content safely compared to raw pointers.

---

### 🚀 How to Compile & Run

Each exercise contains its own **Makefile**. To run the PhoneBook (ex01):

```bash
# Navigate to the exercise
cd cpp00/ex01

# Compile
make

# Run
./phonebook
