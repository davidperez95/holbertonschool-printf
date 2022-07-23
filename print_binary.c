#include "main.h"

/**
 * print_binary - prints a deciman in binary
 * @args: list of arguments
 *
 * Return: number of chars printed
 */
int print_binary(va_list args)
{
	unsigned int num = 0, max = 2147483648, i = 1, sum = 0;
	unsigned int buffer[32];
	int count = 0;

	num = va_arg(args, unsigned int);
	buffer[0] = num / max;

	for (; i < 32; i++)
	{
		max /= 2;
		buffer[i] = (num / max) % 2;
	}

	for (i = 0; i < 32; i++)
	{
		sum += buffer[i];
		if (sum >= 1 || i == 31)
		{
			_putchar('0' + buffer[i]);
			count++;
		}
	}

	return (count);
}	
