#include "main.h"
/**
 * print_char - prints a character
 *
 * @arg: argument passed
 *
 * Return: 1
 */
int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_string - prints a string
 *
 * @arg: argument passed
 *
 * Return: number of characters printed
 */
int print_string(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char *);

	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percent - prints a percent character
 *
 * @arg: argument passed
 *
 * Return: 1
 */
int print_percent(va_list arg)
{
	(void)arg;
	_putchar('%');
	return (1);
}
/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putchar_str - prints a string using _putchar
 *
 * @str: the string to print
 *
 * Return: no of characters printed
 */

int _putchar_str(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++
	}
	return (a);
}
