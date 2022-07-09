#ifndef MAIN_H
#define MAIN_H
/* header files for using Malloc, varidic function MACROS and write function */
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/* write functions */
int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *str);

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags;
/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags *f);
} ph;
/* prototype for getting flags or call flags */
int call_flag(char s, flags *f);

/* call print */
int (*call_print(char s))(va_list, flags *);

/* print_string */
int print_string(va_list l, flags *f);
/* print character*/
int print_char(va_list l, flags *f);
/* print_percent */
int print_percent(va_list l, flags *f);

#endif
