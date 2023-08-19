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
/**
 * print_binary - It converts a number from base 10 to binary
 * @list: Its a list of arguments passed to this function
 * @counter: number of characters printed
 * Return: It is the length of the number printed
 */
int pbinary(va_list list, int *counter)
{
	int f = 0;
	int c = 0;
	int i, a = 1, b;
	unsigned int n = va_list(counter, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & n);
		if (p >> (31 - i))
			f = 1;
		if (f)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		_putchar('0');
	}
	return (c);
}
/**
 * print_reversed - it calls a function to reverse and print a string
 * @list: list of args
 * @counter: number of characters
 * Return: Amount of characters printed
 */
int preversed(va_list list, int *counter)
{
	char *a = va_list(counter, char*);
	int i;
	int j = 0;

	if (a == NULL)
		a = "(null)";
	while (a[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
/**
 * prot13 - prints str to ROT13 place.
 * @counter: number of characters
 * @list: va_list args
 * Return: counter
 *
 */
int prot13(va_list list, int *counter)
{
	int i, j, counter = 0;
	int q = 0;
	char *a = va_list(counter, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (a == NULL)
		a = "(null)";
	for (i = 0; s[i]; i++)
	{
		q = 0;
		for (j = 0; alpha[j] && !q; j++)
		{
			if (a[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;
				q = 1;
			}
		}
		if (!q)
		{
			_putchar(a[i]);
			counter++;
		}
	}
	return (counter);
}
