#include <stdio.h>
#include <stdarg.h>
#include "main.h"


/**
 * decimal_to_binary - convert decimal number to binary
 * @num: number to be converted
 * Return: number converted to binary
 */

int decimal_to_binary(int num)
{
int binary[32];
int i = 0;
int j;
if (num == 0)
{
return (0);
}
while (num > 0)
{
binary[i] = num % 2;
num /= 2;
i++;
}
for (j = i; j >= 0; j--)
{
printf("%d", binary[j]);
}
return (i);
}

/**
 * base_len - calculates the length of a number in a given base
 * @num: The number to calculate the length of
 * @base: The base to calculate the length in
 *
 * Return: The length of the number in the given base
 */
int base_len(unsigned int num, int base)
{
int len = 0;

while (num != 0)
{
len++;
num /= base;
}
return (len);
}

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 *
 * Return: A pointer to the reversed string
 */
char *rev_string(char *s)
{
int i, j;
char temp;

for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
return (s);
}

/**
 * itoa_base - converts a number to a string in a given base
 * @num: The number to convert
 * @base: The base to convert to
 *
 * Return: A pointer to the converted string
 */
char *itoa_base(unsigned int num, int base)
{
char *str;
int i = 0;

str = malloc(sizeof(char) * base_len(num, base) + 1);
if (str == NULL)
return (NULL);

while (num != 0)
{
int rem = num % base;
str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
num /= base;
}

str[i] = '\0';
rev_string(str);

return (str);
}
