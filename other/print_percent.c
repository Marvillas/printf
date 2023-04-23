#include "main.h"

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
