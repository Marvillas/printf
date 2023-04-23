#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct print_op - Struct print_op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct print_op
{
	char *op;
	int (*f)(va_list);
} print_op_t;

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int _putchar(char c);
int print_integer(va_list arg);
int print_integer_helper(int n);
int print_binary(va_list arg);
int print_binary_helper(unsigned int n);
int print_unsigned(va_list arg);
int print_unsigned_helper(unsigned int n);
int print_octal(va_list arg);
int print_octal_helper(unsigned int n);
int print_hex(va_list arg);
int print_spec_String(va_list arg);
int print_hex_helper(unsigned int n);
int print_hex_upper(va_list arg);
int print_hex_upper_helper(unsigned int n);
int call_print_func(const char *format, int *i, va_list args, print_op_t *ops);

#endif /* MAIN_H */
