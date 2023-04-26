#include "main.h"

/**
 * parser - receives tyhe main string and all the necwssary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @my_list: A list of all the possible functions.
 * @arg_list: A list containing all the arguments passed to the program.
 * Return: A total count of the characters printed.
 */
int _return(const char *format, convert my_list[], va_list arg_list)
{
int i, j, r_val, printed_chars;

printed_chars = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
for (j = 0; my_list[j].sym != NULL; j++)
{
if (format[i + 1] == my_list[j].sym[0])
{
r_val = my_list[j].f(arg_list);
if (r_val == -1)
return (-1);
printed_chars += r_val;
break;
}
}
if (my_list[j].sym == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_putchar(format[i]);
_putchar(format[i + 1]);
printed_chars = printed_chars + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_putchar(format[i]);
printed_chars++; }
}
return (printed_chars);
}
