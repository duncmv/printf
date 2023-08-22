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

	if (p == NULL)
	{
		p = "(null)";
	}

	while (*p != '\0')
	{
		_putchar(*p);
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
 * pdecint - prints a decimal/ int
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int pdecint(va_list list, int *counter)
{
	int a = *counter, index = 0, i = va_arg(list, int);
	int digits[10];

	if (i == 0)
	{
		_putchar('0');
		return (++a);
	}
	if (i < 0)
	{
		_putchar('-');
		i = -i;/*removes the negative*/

		a++;
	}
	while (i > 0)
	{

		digits[index] = i % 10;/*gets last digit*/
		i /= 10;/*removes last digit*/

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
/**
 * poctal - prints a number in octal notation
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int poctal(va_list list, int *counter)
{
	int a = *counter, index = 0;
	unsigned int i = va_arg(list, int);
	char digits[11];

	if (i == 0)
	{
		_putchar('0');
		return (++a);
	}
	while (i > 0)
	{
		digits[index] = i % 8;/*gets last digit*/
		i /= 8;/*removes last digit*/
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
