# 0x11. C - printf

## Description
This team project is part of the ALX software Engineering Program.
_printf replicates the C standard library printf() function.

---

## Prototype
```int _printf(const char *format, ...);```
## Usage
* Prints a string to the standard output, according to a given format
* All files were created and compiled on Ubuntu 20.04LTS using gcc with the command ```gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c```
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: ```_printf("format string", arguments...)``` where ```format string``` can contain conversion specifiers and flags,
along with regular characters
## Examples
* ```_printf("Hello, ALX\n")``` *prints "Hello, ALX", followed by a new line*
* ```_printf("%s", "Hello")``` *prints "Hello"*
* ```_printf("This is a number: %d", 98)``` *prints "This is a number: 98"*
---
# Tasks
These are all the tasks of this project, the ones that are completed link to the corresponding files.
