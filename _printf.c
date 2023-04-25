#include <stdio.h>
#include <stdarg.h> 
#include "main.h"


int _printf(const char *format, ...)
{
va_list list;
int prnt = 0;

 va_start(list, format);

 while (*formart != '\0')
{
  if  (*format == '%')
    {
      formart++;
      switch (*formart)
	{
	case 'c':
	 _putchar(va_arg(list, int));
	  count++;
	  break;
	case 's':
	  count += printf("%s" , va_arg(list, const char *));
	  count++;
	  break;
	default:
	  _putchar('%');
	  _putchar(*format);
	  count += 2;
	  break;
	}
      format++;
    }
	      else
      }
      _putchar(*format);
      count++;
      format++;

    }
 va_end(list);
return (prnt);
}
