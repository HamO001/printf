#include "main.h"

/**
 * _putchar - writes a character to std out put
 * @c: Character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
return (i);
}
