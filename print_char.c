#include "main.h"

/**
 * print_char - prints character
 *
 * Return: EXIT_SUCCESS
 */
int print_char(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);

	return (1);
}
