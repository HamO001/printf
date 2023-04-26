#ifndef _PRINTF
#define _PRINTF

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: The operator
 * @f: The function associated
 */
typedef struct changed
{
	char *sym;
	int (*f)(va_list);
}convert;


int _putchar(char);
int _printf(const char *format, ...);
int _return(const char *format, convert my_list[], va_list list);

#endif
