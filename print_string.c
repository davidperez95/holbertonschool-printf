#include "main.h"

/**
 * print_string - prints string
 * @s: string to print
 *
 * Return: count
 */
int print_string(va_list s)
{
	char *string = va_arg(s, char *);
	int i = 0;

	if (string == NULL)
		string = "(nill)";

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}

	return (i);
}
