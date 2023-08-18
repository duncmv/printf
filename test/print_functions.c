#include "main.h"
/**
 * pchar - prints a char
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
void pchar(va_list list, int *counter)
{
	_putchar(va_arg(list, int));
	*counter++;
}
/**
 * pstring - prints a string
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
void pstring(va_list list, int *counter)
{
	char *p = va_arg(list, char *);

	while (p)
	{
		_putchar(*p++);
		*counter++;
	}
}
/**
 * ppercent - prints a %
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
void ppercent(va_list list, int *counter)
{
	(void)list;
	_putchar('%');
	*counter++;
}
