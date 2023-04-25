#include "main.h"

/**
 * _putchar - writes character to std out put
 * @c: character to be printed
 * Return 1 0n success
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
