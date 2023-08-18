#include "main.h"
/**
 * pchar - prints a char
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int pchar(va_list list, int *counter)
{
	int a;

	_putchar(va_arg(list, int));
	a = ++*counter;
	return (a);
}
/**
 * pstring - prints a string
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int pstring(va_list list, int *counter)
{
	int a;
	char *p = va_arg(list, char *);

	while (*p != '\0')
	{
		_putchar((int)*p);
		a = ++*counter;
		p++;
	}
	return (a);
}
/**
 * ppercent - prints a %
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int ppercent(va_list list, int *counter)
{
	int a;
	(void)list;
	_putchar('%');
	a = ++*counter;
	return (a);
}
/**
 * pdecint - prints a %
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int pdecint(va_list list, int *counter)
{
	int a = *counter, index = 0, i = va_arg(list, int);
	char digits[10];

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		a++;
	}
	while (i > 0)
	{
		digits[index] = i % 10;
		i /= 10;
		index++;
	}
	a += index;
	index--;

	while (index >= 0)
	{
		_putchar(digits[index] + '0');
		index--;
	}

	return (a);
}
