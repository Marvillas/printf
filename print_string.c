#include "main.h"

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
