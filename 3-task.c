#include "main.h"
/**
 * print_binary - prints an unsigned integer in binary form
 *
 * @arg: argument passed
 *
 * Return: number of characters printed
 */
int print_binary(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0;

	if (n / 2)
		count += print_binary_helper(n / 2);

	_putchar(n % 2 + '0');
	count++;

	return (count);
}

/**
 * print_binary_helper - helper function for print_binary
 *
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_binary_helper(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += print_binary_helper(n / 2);

	_putchar(n % 2 + '0');
	count++;

	return (count);
}
