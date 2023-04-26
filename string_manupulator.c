#include "main.h"

/**
 * _strlen - calculate the lenth of a string
 * @s: string to calculate lenth of
 * Return: the lenth of string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 * _strcpy - copy a string to a destination buffer
 * @dest: the buffer to copy the sting to
 * @src: string to copy
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
char *rest = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (rest);
}

/**
 * _strcat - concatenate two strings
 * @dest: destination of string
 * @src: source of string appended to destination
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
char *ret = dest;
while (*dest != '\0')
dest++;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (ret);
}

/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 if string are equal
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
return (*s1 - *s2);
}