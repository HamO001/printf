#include "main.h"
#include <stdio.h>
int hex_check(int, char);

/**
 * print_binary - converts a number from base 10 to binarry
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
unsigned int num;
int i, len;
char *str;
char *rev_str;

num = va_arg(list, unsigned int);
if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
len = base_len(num, 2);
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (-10);

for (i = 0; num > 0; i++)
{
if (num % 2 == 0)
str[i] = '0';
else
str[i] = '1';
num = num / 2;
}
str[i] = '\0';
rev_str = rev_strng(str);
if (rev_str == NULL)
return (-1);
write_base(rev_str);
free(str);
free(rev_str);
return (len);
}

/**
 * print_octal -prints numeric representation of a number in octal base
 * @list: List of arguments passed to the program
 * Return: Number of symboles printed
 */
int print_octal(va_list list)
{
unsigned int num;
int len;
char *octal_rep;
char *rev_str;

num = va_arg(list, unsigned int);

if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
len = base_len(num, 8);

octal_rep = malloc(sizeof(char) * len + 1);
if (octal_rep == NULL)
return (-1);
for (len = 0; num > 0; len++)
{
octal_rep[len] = (num % 8) + 48;
num = num / 8;

}
octal_rep[len] = '\0';
rev_str = rev_strng(octal_rep);
if (rev_str == NULL)
return (-1);

write_base(rev_str);
free(octal_rep);
free(rev_str);
return (len);
}

/**
 * print_hex - prints desimal representation of a number on base 16 lowercase
 * @list: arguments passed
 * Return: syboles printed
 */
int print_hex(va_list list)
{
unsigned int num;
int len;
int rem_num;
char *hex_rep;
char *rev_hex;

num = va_arg(list, unsigned int);

if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
len = base_len(num, 16);

hex_rep = malloc(sizeof(char) * len + 1);
if (hex_rep == NULL)
return (-1);
for (len = 0; num > 0; len++)
{
rem_num = num % 16;
if (rem_num > 9)
{
rem_num = hex_check(rem_num, 'X');
hex_rep[len] = rem_num;
}
else
hex_rep[len] = rem_num + 48;
num = num / 16;
}
hex_rep[len] = '\0';
rev_hex = rev_strng(hex_rep);
if (rev_hex == NULL)
return (-1);
write_base(rev_hex);
free(hex_rep);
free(rev_hex);
return (len);
}


/**
 * print_heX - prints representation of decimal number on base16 uppercase
 * @list: arguments passed
 * Return: Number printed
 */
int print_heX(va_list list)
{
unsigned int num;
int len;
int rem_num;
char *hex_rep;
char *rev_hex;

num = va_arg(list, unsigned int);

if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
len = base_len(num, 16);
hex_rep = malloc(sizeof(char) * len + 1);
if (hex_rep == NULL)
return (-1);
for (len = 0; num > 0; len++)
{
rem_num = num % 16;
if (rem_num > 9)
{
rem_num = hex_check(rem_num, 'x');
hex_rep[len] = rem_num;
}
else
hex_rep[len] = rem_num + 48;
num = num / 16;
}
hex_rep[len] = '\0';
rev_hex = rev_strng(hex_rep);
if (rev_hex == NULL)
return (-1);
write_base(rev_hex);
free(hex_rep);
free(rev_hex);
return (len);
}

/**
 * hex_check - checks which hex function is calling it
 * @num: number to be converted to a letter
 * @x: tells which hex function that is calling
 * Return: Ascii value of a letter
 */
int hex_check(int num, char x)
{
char *hex = "abcdef";
char *Hex = "ABCDEF";

num = num - 10;
if (x == 'x')
return (hex[num]);
else
return (Hex[num]);
return (0);
}
