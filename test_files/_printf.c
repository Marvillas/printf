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

/**
 * print_char - prints a character
 * @types: the va_list with the character to print
 * @flags: unused
 * Return: the number of characters printed
 */
int print_char(va_list types, int flags)
{
	char c = va_arg(types, int);

	(void)flags;
	_putchar(c);
	return (1);
}

/**
 * print_string - prints a string
 * @types: the va_list with the string to print
 * @flags: unused
 * Return: the number of characters printed
 */
int print_string(va_list types, int flags)
{
	char *s = va_arg(types, char *);
	int chars_printed = 0;

	(void)flags;
	while (*s)
	{
		_putchar(*s);
		chars_printed++;
		s++;
	}

	return (chars_printed);
}

/**
 * print_percent - prints a percent sign
 * @types: unused
 * @flags: unused
 * Return: the number of characters printed
 */
int print_percent(va_list types, int flags)
{
	(void)types;
	(void)flags;
	_putchar('%');
	return (1);
}
