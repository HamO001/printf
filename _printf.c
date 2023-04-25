#include <stdio.h>

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
	  putchar('%');
	  putchar(*format);
	  count += 2;
	  break;
	
	}
      format++;
      {
	      else
      }
      putchar(*format);
      count++;
      format++;
    
    }
 va_end(list);
return (prnt);
}
