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
### [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./_printf.c)
* Write a function that produces output according to format.
  - c : converts input into a character
  - s : converts input into a string
### [1. Education is when you read the fine print. Experience is what you get if you don't](./print_decimal.c)
* Handle the following conversion specifiers:
  - d : converts input into a base 10 integer
  - i : converts input into an integer
### [2. With a face like mine, I do better in print](./print_bases.c)
* Handle the following conversion specifiers:
  - b : the unsigned int argument is converted to binary
### [3. What one has not experienced, one will never understand in print](./print_bases.c)
* Handle the following conversion specifiers:
  - u : converts the input into an unsigned integer
  - o : converts the input into an octal number
  - x : converts the input into a hexadecimal number
  - X : converts the input into a hexadecimal number with capital letters

### [4. Nothing in fine print is ever good news](./_putchar.c)
* Use a local buffer of 1024 chars in order to call write as little as possible.

