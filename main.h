#ifndef _PRINTF
#define _PRINTF

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


/* Function that produces output according to a formart */
int _printf(const char *formart, ...);

/* Helper function prototypes */
int _putchar(char c);
int _puts(char *str);
int _strlen(char *s);
int _write_char(char c);
int _write_string(char *str);

/* converstion specifires functions */
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va+list list);

/* number printer functiond */
int  print_decimal(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_hex_upper(va_list list);

/* String manipilator functions */
char *rev_string(char *s);

/* custom data types */
typedef unsigned int unit;
typedef unsigned long int ulong;
typedef unsigned long long int ullong;

#endif
