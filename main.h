#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_


#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

typedef struct id_function
{
	char id;
	int (*f)();
} function_t;
int _printf(const char *format, ...);
int _putchar(char c);
int format_specifier(va_list ap, int count, const char *form);
int string_type(va_list ap);
int char_type(va_list ap);
int int_type(va_list ap);

#endif /* #define MAIN_H */
