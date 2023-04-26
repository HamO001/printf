#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @c: chracter to be printed
 * Return: 1 when successful and -1 on error
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
