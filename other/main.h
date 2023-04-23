#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);

/* functions handling format characters c, s % */
int print_char(va_list types, int flags);
int print_string(va_list types, int flags);
int print_percent(va_list types, int flags);

#endif /* MAIN_H */
