#include "main.h"


int specifier(char format_char, va_list args)
{
	_specifier special_chars[] = {
		{'d', &d_specifier},
		{'c', &c_specifier},
		{'\0', NULL}
	};
	
	int i, value;

	for (i = 0; special_chars[i].c != '\0'; i++)
	{
		if (special_chars[i].c == format_char)
		{
			if (special_chars[i].c == 'd')
			{
				value = va_arg(args, int);
			}
			else if (special_chars[i].c == 'c')
			{
				value = va_arg(args, int);
			}
			return (special_chars[i].f(&value));
		}
	}
	return (-1);
}
