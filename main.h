#ifndef __MAIN_H__
#define __MAIN_H__
/* header files for using Malloc, varidic function MACROS and write function */
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/* write functions */
int _putchar(char c);
int _printf(const char *format, ...);

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

/* prototype for getting flags or call flags */
int call_flag(char s, flags *f)


#endif
