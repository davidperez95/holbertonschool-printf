#include "main.h"

/**
 * get_format - selects the correct format
 * @s: function to select
 *
 * Return: pointer to the correcto function
 */
int (*get_format(const char *format))(va_list)
{
	print_t functions[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_decimal},
		{"b", print_binary},
		/*
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hexadecimal},
		{"X", print_hexa_upper},
		{"S", print___},
		{"p", print_pointer},
		{"r", print_reversed},
		{"R", print_rot13},
		*/
		{NULL, NULL}
	};
	int i = 0;
	
	for (; functions[i].format != NULL; i++)
	{
		if (*(functions[i].format) == *format)
			break;
	}

	return (functions[i].function);
}
