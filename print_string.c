#include "main.h"

/**
 * print_string - prints string
 * @args: string to print
 *
 * Return: count
 */
int print_string(va_list args)
{
	char *string = va_arg(args, char *);
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
