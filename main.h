#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int format_specifier(va_list ap, const char *form);

#endif /* #define MAIN_H */
