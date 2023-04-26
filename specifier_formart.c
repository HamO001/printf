
#include "main.h"

/**
 * handle_char - handles the 'c' converstion specifire
 * @args: the list of arguments passed to printf
 * @format: apointer to formart string
 * Return: number of characters printed
 */
int handle_char(va_list args, const char *format)
{
char c = var_arg(args, int);
-write_char(c);
return (1);
}

/**
 * handle_string - handles the 'S' converstion specifier
 * @args: the list of argumets passed to printf
 * @format: pointer to format string
 * Return: the number of characters printed
 */
int handle_string(va_list args, const char *format)
{
char *s = va_arg(args, char *);

if (s == NULL)
s = "(null)";

write_sring(s);

return (_strlen(s));
}

/**
 * handle_percent - handles the '%' converstion specifier
 * @args: the list of argumets passed to printf
 * @format: pointer to the format string
 * Return: no of character printed
 */
int handle_percent(va_list args, cons char *format)
{
(void)args;
(void)format;

_write_char('%');
return (1);
}
