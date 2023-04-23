#include "main.h"
/**
 * print_unsigned - prints an unsigned integer
 *
 * @arg: argument passed
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0;

	if (n / 10)
		count += print_unsigned_helper(n / 10);

	_putchar(n % 10 + '0');
	count++;

	return (count);
}

/**
 * print_unsigned_helper - helper function for print_unsigned
 *
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_unsigned_helper(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_unsigned_helper(n / 10);

	_putchar(n % 10 + '0');
	count++;

	return (count);
}

/**
 * print_octal - prints an unsigned integer in octal form
 *
 * @arg: argument passed
 *
 * Return: number of characters printed
 */
int print_octal(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0;

	if (n / 8)
		count += print_octal_helper(n / 8);

	_putchar(n % 8 + '0');
	count++;

	return (count);
}

/**
 * print_octal_helper - helper function for print_octal
 *
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_octal_helper(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal_helper(n / 8);

	_putchar(n % 8 + '0');
	count++;

	return (count);
}

/**
 * print_hex - prints an unsigned integer in hexadecimal form
 *
 * @arg: argument passed
 *
 * Return: number of characters printed
 */
int print_hex(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0;

	if (n / 16)
		count += print_hex_helper(n / 16);

	if (n % 16 < 10)
		_putchar(n % 16 + '0');
	else
		_putchar(n % 16 - 10 + 'a');

	count++;

	return (count);
}

/**
 * print_hex_helper - helper function for print_hex
 *
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_hex_helper(unsigned int n)
{
	int count = 0;

	if (n / 16)
		count += print_hex_helper(n / 16);

	if (n % 16 < 10)
		_putchar(n % 16 + '0');
	else
		_putchar(n % 16 - 10 + 'a');

	count++;

	return (count);
}

/**
 * print_hex_upper - prints an unsigned integer in uppercase hexadecimal form
 *
 * @arg: argument passed
 *
 * Return: number of characters printed
 */
int print_hex_upper(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0;

	if (n / 16)
		count += print_hex_upper_helper(n / 16);

	if (n % 16 < 10)
		_putchar(n % 16 + '0');
	else
		_putchar(n % 16 - 10 + 'A');
	count++;
	return (count);
}
/**
 * print_hex_upper_helper - helper function for print_hex_upper
 *
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_hex_upper_helper(unsigned int n)
{
	int count = 0;

	if (n / 16)
		count += print_hex_upper_helper(n / 16);
	if (n % 16 < 10)
		_putchar(n % 16 + '0');
	else
		_putchar(n % 16 - 10 + 'A');

	count++;
	return (count);
}
