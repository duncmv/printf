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
 * pdecint - prints a decimal/ int
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int pdecint(va_list list, int *counter)
{
	int a = *counter, index = 0, i = va_arg(list, int);
	char digits[10];

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
/**
 * pudecint - prints an unsigned number 
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int pudecint(va_list list, int *counter)
{
	int a = *counter, index = 0;
	unsigned int i = va_arg(list, unsigned int);
	char digits[10];

	if (i == 0)
	{
		_putchar('0');
		return (++a);
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
 * phex - prints a number in hexadecimal notation
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int phex(va_list list, int *counter)
{
	int a = *counter, index = 0;
	unsigned int i = va_arg(list, unsigned int);
	char hex[] = {"0123456789abcdef"};
	unsigned int digits[8];

	if (i == 0)
	{
		_putchar('0');
		return (++a);
	}
	while (i > 0)
	{
		digits[index] = i % 16;/*gets last digit*/
		i /= 16;/*removes last digit*/
		index++;
	}
	a += index;
	index--;

	while (index >= 0)
	{
		for (i = 0; i < 16; i++)
		{
			if (digits[index] == i)
				_putchar(hex[i]);
		}
		index--;
	}

	return (a);
}
/**
 * pHex - prints a number in hexadecimal notation
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int pHex(va_list list, int *counter)
{
	int a = *counter, index = 0;
	unsigned int i = va_arg(list, unsigned int);
	char Hex[] = {"0123456789ABCDEF"};
	unsigned int digits[8];

	if (i == 0)
	{
		_putchar('0');
		return (++a);
	}
	while (i > 0)
	{
		digits[index] = i % 16;/*gets last digit*/
		i /= 16;/*removes last digit*/
		index++;
	}
	a += index;
	index--;

	while (index >= 0)
	{
		for (i = 0; i < 16; i++)
		{
			if (digits[index] == i)
				_putchar(Hex[i]);
		}
		index--;
	}
	return (a);
}
/**
 * pbinary - prints a binary
 * @list: va_list of args
 * @counter: number of characters printed
 *
 * Return: counter
 */
int pbinary(va_list list, int *counter)
{
	int a = *counter, index = 0;
	unsigned int i = va_arg(list, int);
	char digits[31];

	if (i == 0)
	{
		_putchar('0');
		return (++a);
	}
	while (i > 0)
	{

		digits[index] = i % 2;/*gets last digit*/
		i /= 2;/*removes last digit*/

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
