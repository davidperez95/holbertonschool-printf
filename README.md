# holbertonschool-printf Project

## Description

The _printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

### Usage

int _printf(const char *format, ...)

Where format contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

If the program runs successfully, the return value is the amount of chars printed.

| Specifier | Output    |
| --------- | --------- |
| c | Character |
| d | Decimal |
| i | Integer |
| s | String |
| b | Binary |

## Compilation/Instalation

Compiled using GCC and -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format flags.

## Requeriments

Use the main.h header file and all the complementary functions to run the _printf()

## Examples

_printf("Length:[%d, %i]\n", len, len);
_printf("Negative:[%d]\n", -762534);
_printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
_printf("%b\n", 98);

## Author

David A. Perez.
