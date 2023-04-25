#include <stdio.h>

int _printf(const char *formart, ...)
{
  va_list list;
  va_list(list, formart);
  int prnt = 0;
  while (*formart)
    {
      printed += *formart == '%' ?
	(*(++formart) == 'c' ? _putchar(va_arg(list, int)) :
	 *(formart) == 's' ? printf("%s", va_arg(list, char *)) :
    }
}
