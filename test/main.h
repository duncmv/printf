#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
/**
 * struct frmt - struct frmt
 *
 * @spec: format specifier
 * @f: function associated
 */
typedef struct frmt
{
	char *spec;
	void (*f)(va_list list, int *counter);
} frmt;
#endif
