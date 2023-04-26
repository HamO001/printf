#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - prints character
 * @list: list of arguments
 * Return: no of characters printed
 */
int print_char(va_list list)
{
  char c = va_arg(list, int);
  _putchar(c);
  return (1);
}

/**
 * print_int - prints integers
 * @n: integer to print
 * Return: number of character printed
 */
int _print_int(int n)
{
  int digits, divisor, i, count = 0;

  if (n < 0)
    {
      _putchar('-');
      count++;
      n *= -1;
    }
  divisor = 1;
  digits = 1;
  while (n / divisor >= 10)
    {
      digits++;
      divisor *= 10;
    }

  for (i = 0; i < digits; i++)
    {
      _putchar('0' + (n / divisor));
      count++;
      n %= divisor;
      divisor /= 10;
    }
  return (count);
}