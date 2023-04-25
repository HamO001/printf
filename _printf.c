#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints charactes, integers and string
 * @format: contains what needs to be printed
 * Return: printed charcters
 */

int _printf(const char *format, ...)
{
va_list list;
int count = 0;

va_start(list, format);

while (*format != '\0')
{
if  (*format == '%')
{
format++;
switch (*format)
{
case 'c':
_putchar(va_arg(list, int));
count++;
break;
case 's':
count += printf("%s", va_arg(list, const char *));
count++;
break;
case 'd':
_putchar(va_arg (list, float));
count++
break;
default:
_putchar('%');
_putchar(*format);
count += 2;
break;
}
format++;
}
else
{
_putchar(*format);
count++;
format++;
}
}
va_end(list);
return (count);
}
