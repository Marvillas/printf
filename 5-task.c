#include "main.h"

/**
 * isNonPrintable - determines if character is a non-
 * printable char on ASCII table
 * @c: char
 * Return: true or false
 */

int isNonPrintable(char c)
{
	return ((c > 0 && c < 32) || c >= 127);
}

/**
 * print_spec_String_helper - prints a character in hexadecimal format
 * (upper case)
 *
 * @n: character
 *
 * Return: number of characters printed
 */

int print_spec_String_helper(unsigned int n)
{
	int count = 0;
	char hex_digit[] = "0123456789ABCDEF";

	if (n / 16)
		count += print_spec_String_helper(n / 16);
	_putchar(hex_digit[n % 16]);
	count++;

	return (count);
}

/**
 * print_spec_String - prints a string with non-printable characters
 *
 * @arg: arguments
 *
 * Return: no of characters printed
 */

int print_spec_String(va_list arg)
{
	char *s = va_arg(arg, char*);
	int count = 0;

	if (!s)
	{
		s = "(null)";
		_putchar_str(s);
		return (6);
	}

	while (*s)
	{
		if (!isNonPrintable(*s))
		{
			_putchar(*s);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			if (*s < 16)
			{
				_putchar('0');
				count++;
			}
			count += print_spec_String_helper((unsigned int)*s);
		}
		s++;
	}
	return (count);
}
