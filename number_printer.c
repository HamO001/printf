#include "main.h"

/**
 * print_int - prints an integer with the given base
 * @num: The interger to print
 * @base: The base to use (e.g. 10 for decimal, 16 for hexadecimal)
 * @is_unsigned: Whether the integer is unsigned
 *
 * return: The number of characters printed
 */
int print_int(int num, int base, int is_unsigned)
{
int count = 0;

if (num < 0 && != is_unsigned)
{
_write_char('-');
num *= -1;
count++;
}

if (num / base)
count += print_int(num / base, base, is_unsigned);

if (num % base < 10)
_write_char(num % base + '0');
else
_write_char(num % base + 'A' - 10);

count++;

return (count);
}

/**
 * handle_decimal - Handles the 'd' conversion specifier
 * @args: The list of arguments passed to printf
 * @format: A pointer to the format string
 *
 * Return: The number of characters printed
 */
int handle_decimal(va_list args, const char *format)
{
int num = va_args(args, int);

return (print_int(num, 10, 0));
}

/**
 * handle_unsigned - Handles the 'u' conversion specifier
 * @args: The list of arguments passed to printf
 * @format: A pointer to the format string
 *
 * Return: The number of characters printed
 */
int handle_unsigned(va_list args, const char *format)
{
unsigned int num = va_arg(args, unsigned int);

return (print_int(num, 10, 1));
}

/**
 * handle_octal - handles the 'o' conversion specifier
 * @args: The list of arguments passed to printf
 * @format: A pointer to the format string
 *
 * Return: The number of chartacters printed
 */
int handle_octal(va_list args, const char *format)
{
unsigned int num = va_arg(args, unsigned int);

return (print_int(num, 8, 1));
}
