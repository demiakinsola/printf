#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int format_specifier(va_list ap, int count, const char *form);
int string_type(va_list ap);
int char_type(va_list ap);

#endif /* #define MAIN_H */
