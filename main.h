#ifndef _PRINTF
#define _PRINTF

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char);
int _printf(const char *format, ...);
int _write_char(char c);
int _puts(char *str);
int _print_number(int n);
int _print_binary(unsigned int n);

#endif
