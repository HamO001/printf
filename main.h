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
struct typedef struct changed
{
	char *sym;
	int (*f)(va_list);
}convert;


int _putchar(char);
int _printf(const char *format, ...);


#endif
