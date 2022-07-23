#include "main.h"

/**
 * print_char - prints character
 * @args: character to print
 *
 * Return: (1) sizeof char
 */
int print_char(va_list args)
{
	char character = (char)va_arg(args, int);

	_putchar(character);

	return (1);
}
