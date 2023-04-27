#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format: character string
 *
 * Return: the number of characters printed (excluding the null byte
 * used to end output to strings)
 */
int _printf(const char *format, ...)
{
va_list args;
int printed_chars, num = 0;
unsigned int n;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
return (-1);
if (*format == '%')
printed_chars += _putchar('%');
else if (*format == 'c')
printed_chars += _putchar(va_arg(args, int));
else if (*format == 's')
printed_chars += _puts(va_arg(args, char *));
else if (*format == 'd' || *format == 'i')
{
num = va_arg(args, int);
printed_chars += _print_number(num);
}
else if (*format == 'b')
{
n = va_arg(args, unsigned int);
printed_chars += _print_binary(n);
}
else
{
printed_chars += _putchar('%');
printed_chars += _putchar(*format);
printed_chars += 2;
}
}
else
{
printed_chars += _putchar(*format);
}
format++;
}
va_end(args);
return (printed_chars);
}
