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
### [5. My weakness is wearing too much leopard print](./print_bigS.c)
* Handle the following custom conversion specifier:
  - S : prints the string
  - Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
### [6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print](./Address.c)
* Handle the following conversion specifier:
  - p : int input is converted to a pointer address
### [7. The big print gives and the small print takes away](./call_flag.c)
* Handle the following flag characters for non-custom conversion specifiers:
  - \+ : adds a \+ in front of signed positive numbers and a \- in front of signed negative numbers
  - space : same as \+, but adds a space (is overwritten by \+)
  - \# : adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions
### [13. Print is the sharpest and the strongest weapon of our party](./print_bigS.c)
* Handle the following custom conversion specifier:
  - r : prints the reversed string
### [14. The flood of print has turned reading into a process of gulping rather than savoring](./print_bigS.c)
* Handle the following custom conversion specifier:
  - R : prints the rot13'ed string
