#include "main.h"

int _printf(const char *format, ...)
{
	va_list number;
	
	unsigned int i = 0, count = 0;

	va_start(number, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				printf("%c", '%');
				count++;
				i++;
				continue;
			}
			i++;
			if (format[i] != '\0' && format[i] != '%')
			{
				count += specifier(format[i], number);
			}
		}
		else
		{
			printf("%c", format[i]);
			count++;
		}
	i++;
	}

	va_end(number);
	return (count);
}
