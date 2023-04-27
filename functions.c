#include "main.h"
#define MAX_BINARY_LENGTH 32

/**
 * _print_number - prints an integer
 * @n: the integer to print
 * Return: the number of characters printed
 */
int _print_number(int n)
{
int num_digits = 0;
unsigned int num;
if (n < 0)
{
num = -n;
_putchar('-');
num_digits++;
}
else
{
num = n;
}
if (num / 10)
{
num_digits += _print_number(num / 10);
}

_putchar(num % 10 + '0');
num_digits++;

return (num_digits);
}

/**
 * _print_binary - prints the binary representation of an unsigned int
 * @n: the unsigned int to print in binary format
 * Return: the number of characters printed
 */
int _print_binary(unsigned int n)
{
int bit_count = 0;
unsigned int mask = ~0;
char binary_string[MAX_BINARY_LENGTH];
int i = 0;
while (mask)
{
bit_count++;
mask >>= 1;
}
do {
binary_string[--bit_count] = (n & 1) + '0';
n >>= 1;
} while (bit_count);

while (binary_string[i] != '\0')
{
_putchar(binary_string[i]);
i++;
}
return (i);
}
