#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int pchar(va_list, int *);
int pstring(va_list, int *);
int ppercent(va_list, int *);
int pdecint(va_list, int *);
int pudecint(va_list, int *);
int poctal(va_list, int *);
int pbinary(va_list, int *);
int phex(va_list, int *);
int pHex(va_list, int *);
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
	int (*f)(va_list list, int *counter);
} frmt;
#endif
