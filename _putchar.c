#include "main.h"
/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 * Return: the number of characters written (1 for a single character)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
