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
putchar(va_arg(list, int));
count++;
break;
case 's':
count += printf("%s", va_arg(list, const char *));
count++;
break;
case 'd':
case 'i':
printf("%d", va_arg(list, int));
count++;
break;
default:
putchar('%');
putchar(*format);
count += 2;
break;
}
}
else
{
putchar(*format);
count++;
}
format++;
}
va_end(list);
return (count);
}
