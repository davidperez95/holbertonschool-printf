#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: pointer to acording function
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int count = 0, i = 0;
	int (*function)(va_list);
	char *buffer = NULL;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (-1);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i += 2;
				continue;
			}
			else
			{
				function = get_format(&format[i + 1]);
				if (function == NULL)
					return (-1);
				i += 2;
				count += function(args);
				continue;
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
