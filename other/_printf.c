#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: the format string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list types;
	int total_chars = 0;

	va_start(types, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				total_chars += print_char(types, 0);
			else if (*format == 's')
				total_chars += print_string(types, 0);
			else if (*format == '%')
				total_chars += print_percent(types, 0);
		}
		else
		{
			_putchar(*format);
			total_chars++;
		}
		format++;
	}
	va_end(types);

	return (total_chars);
}
