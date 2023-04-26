#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
int len;
int head;
char tmp;
char *dest;

for (len = 0; s[len] != '\0'; len++)
{}

dest = malloc(sizeof(char) * len + 1);
if (dest == NULL)
return (NULL);

_memcpy(dest, s, len);
for (head = 0; head < len; head++, len--)
{
tmp = dest[len - 1];
dest[len - 1] = dest[head];
dest[head] = tmp;
}
return (dest);
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
}

/**
 * base_len -calculates the length of an octal number
 * @num:number lenth being calculated
 * @base: base to be calculated
 * Return: integer representing the lenth of a number
 */
unsigned int base_len(unsigned int num, int base)
{
unsigned int i;

for (i = 0; num > 0; i++)
{
num = num / base;
}
return (i);
}

/**
 * _memcpy - copys allocated memory
 * @dest: destination
 * @src: source
 * @n: no of bytes to be copied
 * Return: pointer to destination (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
