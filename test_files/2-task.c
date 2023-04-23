#include "main.h"
/**
 * print_integer - prints an integer
 *
 * @arg: argument passed
 *
 * Return: number of characters printed
 */
int print_integer(va_list arg)
{
	int n = va_arg(arg, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n / 10)
		count += print_integer_helper(n / 10);

	_putchar(n % 10 + '0');
	count++;

	return (count);
}

/**
 * print_integer_helper - helper function for print_integer
 *
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_integer_helper(int n)
{
	int count = 0;

	if (n / 10)
		count += print_integer_helper(n / 10);

	_putchar(n % 10 + '0');
	count++;

	return (count);
}
