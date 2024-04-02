#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

typedef struct _specifier {
	char c;
	int (*f)(void *);
} _specifier;

int _putchar(char c);
int _printf(const char *format, ...);
int c_specifier(void *value);
int d_specifier(void *value);
int specifier(char format_char, va_list args);

#endif
