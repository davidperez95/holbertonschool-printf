#ifndef _PRINTF_
#define _PRINTF_

/* importing */ 

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/* types and structures */ 

/*
 * struct print - selects the format
 * @format: format to select
 * @function: function to select
 */
typedef struct print
{
	char *format;
	int (*function)(va_list);
} print_t;

/* macos constant values */

#define BUFFER 1024
#define NUMBER_OF_BITS 8

/* prototypes */

int _printf(const char *format, ...);
int _putchar(char c);
int print_buffer(char *buffer, unsigned int count);
int (*get_format(const char *format))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);
int print_binary(va_list args);

/* macro functions */


#endif /* _PRINTF_ */
