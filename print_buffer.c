#include "main.h"

/**
 * print_buffer - prints buffer
 * @buffer: buffer pointer
 * @count: number of bytes to print
 *
 * Return: number of bytes printed
 */
int print_buffer(char *buffer, unsigned int count)
{
	return (write(1, buffer, count));
}
