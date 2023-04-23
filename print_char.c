#include "main.h"

/**
 * print_char - prints a character
 * @types: the va_list with the character to print
 * @flags: unused
 * Return: the number of characters printed
 */

int print_char(va_list types, int flags)
{
        char c;

        c = va_arg(types, int);
        _putchar(c);
        return (1);
}
