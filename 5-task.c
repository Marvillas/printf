#include "main.h"

/**
 * print_cust_string - Prints a string, replacing non-printable characters
 * with their hexadecimal representation.
 * @args: va_list of arguments.
 *
 * Return: Number of characters printed.
 */
int print_cust_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar("0123456789ABCDEF"[((str[i] & 0xF0) >> 4)]);
			_putchar("0123456789ABCDEF"[str[i] & 0x0F]);
			count += 4;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}
