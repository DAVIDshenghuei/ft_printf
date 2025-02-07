# ft_printf 🖨️

Welcome to **ft_printf**! This project is a personal implementation of the `printf` function in C. If you're familiar with `printf`, then you know it's a versatile function for formatted output. The challenge here is to implement it from scratch, and that’s exactly what we’re going to do.

## Objectives 🎯

The goal of this project is to create your own version of `printf`. It will handle various format specifiers and allow you to control how information is displayed on the screen. By the end, you'll be able to:

- Understand the inner workings of variadic functions in C.
- Implement custom formatted output functions.
- Dive deep into `va_list`, `va_start`, `va_arg`, and `va_end`.

Let's break down the key components and functionality step by step.

## The Key Conversions 🔑

You will implement the following format specifiers:

- **%c** – Prints a single character.
- **%s** – Prints a string.
- **%p** – Prints a pointer in hexadecimal format.
- **%d** – Prints a signed decimal (base 10) number.
- **%i** – Prints an integer (same as `%d`).
- **%u** – Prints an unsigned decimal (base 10) number.
- **%x** – Prints a number in hexadecimal (base 16) lowercase format.
- **%X** – Prints a number in hexadecimal (base 16) uppercase format.
- **%%** – Prints a percent sign.

---

## 1. Setting Up: The Variadic Function 🛠️

Before diving into the formatting logic, it's important to understand how to handle variable arguments. In C, functions like `printf` can take a variable number of arguments. This is done using the following tools:

### **va_list, va_start, va_arg, va_end** 🌐

These are your core tools for handling variadic functions in C. Let's go over each one:

- **`va_list`**: This is a type that holds information about the variable arguments.
- **`va_start(va_list, last_fixed_param)`**: Initializes the `va_list` to start accessing the variadic arguments.
- **`va_arg(va_list, type)`**: Fetches the next argument from the `va_list` in the specified type.
- **`va_end(va_list)`**: Cleans up the `va_list` after you’ve finished using it.

### Example:
```c
#include <stdarg.h>

void example_function(int count, ...) {
    va_list args;
    va_start(args, count);  // Initialize va_list

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);  // Retrieve the next argument
        printf("%d ", num);  // Do something with the argument
    }

    va_end(args);  // Clean up
}
