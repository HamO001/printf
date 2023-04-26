#include "main.c"
#include <atdarg.g>

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
int printed_chars = 0;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
return (-1);
if (*format == '%')
printed_chars += _write_char('%');
else if (*format == 'c')
printed_chars += _write_char(va_arg(args, int));
else if (*format == 's')
printed_chars += _write_char(va_arg(args, char));
else
{
printed_chars += _write_char('%');
printed_chars += _write_char(*format);
}
}
else
{
printed_chars += _write_char(*format);
}
format++
}
va_end(args);

return (printed_chars);
}
