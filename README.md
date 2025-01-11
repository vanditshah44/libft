# Libft

Welcome to **Libft**, a foundational project at **42 Wolfsburg** that involves recreating standard C library functions. This project helps you master low-level programming concepts, memory management, and algorithm implementation.

---

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Mandatory Functions](#mandatory-functions)
4. [Bonus Functions](#bonus-functions)
5. [Usage](#usage)
6. [Installation](#installation)
7. [Resources](#resources)

---

## Introduction

The **Libft** project involves writing your own implementation of standard C library functions. You will:

- Understand core C concepts.
- Learn memory management techniques.
- Build a reusable library of utility functions.

This library can be used as a foundation for many future projects at 42 Wolfsburg.

---

## Features

- Reimplementation of standard C library functions like `strlen`, `strjoin`, and `isalpha`.
- Implementation of additional utility functions for string manipulation and memory operations.
- Bonus functions for working with linked lists.
- Full compliance with **42 Norm** coding standards.

---

## Mandatory Functions

### Part 1: Standard C Library Functions
| Function        | Description                                     |
|-----------------|-------------------------------------------------|
| `ft_isalpha`    | Checks if a character is alphabetic.           |
| `ft_isdigit`    | Checks if a character is a digit.              |
| `ft_isalnum`    | Checks if a character is alphanumeric.         |
| `ft_isascii`    | Checks if a character is an ASCII character.   |
| `ft_isprint`    | Checks if a character is printable.            |
| `ft_strlen`     | Calculates the length of a string.             |
| `ft_memset`     | Fills a block of memory with a specific value.  |
| `ft_bzero`      | Zeros out a block of memory.                   |
| `ft_memcpy`     | Copies memory from one location to another.     |
| `ft_memmove`    | Safely copies memory between overlapping areas. |
| `ft_strlcpy`    | Copies a string to a buffer, ensuring null-termination. |
| `ft_strlcat`    | Appends a string to a buffer, ensuring null-termination. |
| `ft_toupper`    | Converts a character to uppercase.             |
| `ft_tolower`    | Converts a character to lowercase.             |
| `ft_strchr`     | Finds the first occurrence of a character in a string. |
| `ft_strrchr`    | Finds the last occurrence of a character in a string. |
| `ft_strncmp`    | Compares two strings up to a certain length.    |
| `ft_memchr`     | Searches for a byte in memory.                 |
| `ft_memcmp`     | Compares two blocks of memory.                 |
| `ft_atoi`       | Converts a string to an integer.               |
| `ft_calloc`     | Allocates memory and initializes it to zero.   |
| `ft_strdup`     | Duplicates a string.                           |

### Part 2: Additional Functions
| Function        | Description                                     |
|-----------------|-------------------------------------------------|
| `ft_substr`     | Extracts a substring from a string.             |
| `ft_strjoin`    | Joins two strings into one.                     |
| `ft_strtrim`    | Trims characters from the start and end of a string. |
| `ft_split`      | Splits a string into an array of substrings.    |
| `ft_itoa`       | Converts an integer to a string.                |
| `ft_strmapi`    | Applies a function to each character of a string. |
| `ft_striteri`   | Applies a function to each character of a string (with index). |
| `ft_putchar_fd` | Writes a character to a file descriptor.        |
| `ft_putstr_fd`  | Writes a string to a file descriptor.           |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor.         |

---

## Bonus Functions

The bonus part involves creating functions to manipulate linked lists:

| Function         | Description                                    |
|------------------|------------------------------------------------|
| `ft_lstnew`      | Creates a new linked list node.               |
| `ft_lstadd_front`| Adds a node to the beginning of a linked list. |
| `ft_lstsize`     | Counts the number of nodes in a linked list.   |
| `ft_lstlast`     | Retrieves the last node of a linked list.      |
| `ft_lstadd_back` | Adds a node to the end of a linked list.       |
| `ft_lstdelone`   | Deletes a single node from a linked list.      |
| `ft_lstclear`    | Deletes all nodes in a linked list.            |
| `ft_lstiter`     | Iterates through a linked list and applies a function to each node. |
| `ft_lstmap`      | Creates a new list by applying a function to each node. |

---

## Usage

### Compiling the Library
To compile the library:
```bash
make
```
This creates the `libft.a` file, which you can link with your programs.

### Cleaning Up
To remove object files:
```bash
make clean
```
To remove all generated files, including `libft.a`:
```bash
make fclean
```
To recompile from scratch:
```bash
make re
```

### Linking the Library with Your Code
To use the library in your project:
```bash
gcc -Wall -Wextra -Werror -L. -lft your_program.c
```
This links your program with `libft.a`.

---

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/libft.git
   cd libft
   ```
2. Compile the library:
   ```bash
   make
   ```
3. Include the `libft.h` header in your project files:
   ```c
   #include "libft.h"
   ```

---

## Resources
- [42 Wolfsburg](https://www.42wolfsburg.de/)
- [C Standard Library Documentation](https://en.cppreference.com/w/c)
- [Norminette Documentation](https://github.com/42School/norminette)

---

Feel free to reach out for questions or suggestions! Happy coding! 🎉

