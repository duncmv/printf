#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int pchar(va_list, int *);
int pstring(va_list, int *);
int ppercent(va_list, int *);
int pdecint(va_list, int *);
int _putchar(char c);
int _printf(const char *format, ...);
int pbinary(va_list, int *);
int preversed(va_list, int *);
/**
 * struct frmt - struct frmt
 *
 * @spec: format specifier
 * @f: function associated
 */
typedef struct frmt
{
	char *spec;
	int (*f)(va_list list, int *counter);
} frmt;
#endif
