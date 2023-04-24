#include "main.h"
/**
 * _printf - produces output according to a format
 *
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	print_op_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"S", print_spec_String},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"p", print_point},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_hex_upper},
		{NULL, NULL}
	};
	
	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			count += call_print_func(format, &i, args, ops);
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return (count);
}
/**
 * call_print_func - Calls the appropriate printing function
 * @format: Character string containing the format specifier.
 * @i: Index of the format specifier in the format string.
 * @args: va_list of arguments.
 * @ops: Pointer to the array of print_op_t structures.
 *
 * Return: Number of characters printed.
 */
int call_print_func(const char *format, int *i, va_list args, print_op_t *ops)
{
	int j;
	int count = 0;

	for (j = 0; ops[j].op; j++)
	{
		if (format[*i + 1] == *(ops[j].op))
		{
			count += ops[j].f(args);
			break;
		}
	}

	if (!ops[j].op && format[*i + 1] != ' ')
	{
		_putchar(format[*i]);
		count++;
	}

	return (count);
}
