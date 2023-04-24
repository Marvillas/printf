#include "main.h"

/**
 * print_pointer_helper - function to print number in
 * hexadecimal format (lower case)
 *
 * @n: number to print
 * Return: no of chars printed
 */

int print_pointer_helper(unsigned long int n)
{
	int count = 0;
	char hex_digit[] = "0123456789abcdef";

	if (n / 16)
		count += print_pointer_helper(n / 16);

	_putchar(hex_digit[n % 16]);
	count++;

	return (count);
}

/**
 * print_point - prints a pointer address in hexadecimal format
 * @arg: pointer to address
 * Return: no of chars printed
 */

int print_point(va_list arg)
{
	int count = 0;
	unsigned long int p = va_arg(arg, unsigned long int);

	_putchar('0');
	_putchar('x');
	count += 2;

	if (!p)
	{
		_putchar('0');
		count++;
		return (count);
	}

	count += print_pointer_helper(p);

	return (count);
}
