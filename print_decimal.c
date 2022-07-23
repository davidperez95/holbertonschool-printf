#include "main.h"

/**
 * print_decimal - prints a number
 * @args: decimal to print
 *
 * Return: number of arguments printed
 */
int print_decimal(va_list args)
{
	unsigned int num_temp = 0;
	int num = 0, div = 1, count = 0;

	num = va_arg(args, int);

	if (num < 0)
	{
		count += _putchar('-');
		num_temp = num * -1;
	}
	else
		num_temp = num;

	for (; num_temp / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		count += _putchar('0' + num_temp / div);
		num_temp %= div;
		div /= 10;
	}

	return (count);
}
