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

Why i used `std::string` in this module, we move away from C-style `char *` strings to `std::string`. Instead of dealing with individual characters manually, you are working with a high-level object that manages itself. I used `std::string` because it provides an abstraction for text. It encapsulates the character data and the logic for managing it into a single object. This allows for **safer memory management**, **easier access to string properties** like `length()`, and a more robust way to handle data through the Standard Template Library (STL).This introduces several core OOP principles:

* **Encapsulation:** `std::string` is an object that packages both text data and management tools (like `.length()`) together. The `.at()` method: This is a built-in safety feature. If you try to access the 10th character of a 5-letter string using s.at(9), the string object will detect that you are out of bounds and stop the program safely with an error (exception) rather than allowing the program to behave unpredictably.
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
