#include "main.h"

int d_specifier(void *value)
{
	char new_value[50];
	int new_char;

	int *int_value = (int *)value;
	new_char = snprintf(new_value, sizeof(new_value), "%d", *int_value);

	return (new_char);
}

int c_specifier(void *value)
{
	char *char_value = (char *)value;
	_putchar(*char_value);

	return(1);
}
