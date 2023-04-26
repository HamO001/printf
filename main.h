#ifndef _PRINTF
#define _PRINTF

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


/* Function that produces output according to a formart */
int _printf(const char *formart, ...);

/* Function that convert numbers to diffrent bases */
int decimal_to_binary(int num);
int base_len(unsigned int num, int base);
char *rev_string(char *s);
char *itoa_base(unsigned int num, int base);

/* function that print numbers with diffrent converstion specifires */
int print_int(int nun, int base, int is_unsignedint);
int handle_decimal(va_list args, const char *format);
int handle_unsigned(va_list args, const char *format);
int handle_octal(va_list args, const char *format);


/* Helper function prototypes */
int _putchar(char c);
int _puts(char *str);
int _strlen(char *s);
int _write_char(char c);
int _write_string(char *str);

/* converstion specifires functions */
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);

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

#endif
