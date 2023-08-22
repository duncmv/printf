#include "main.h"
/**
 * prot13 - prints string
 * @args: printf arguments
 * @s: counter
 * Return: counter
 *
 */
int prot13(va_list args, int *s)
{
	int l, m, counter = *s;
	int p = 0;
	char *u = va_arg(args, char*);
	char alpha[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char beta[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	if (u == NULL)
		u = "(null)";
	for (l = 0; u[l]; l++)
	{
		p = 0;
		for (m = 0; alpha[m] && !p; m++)
		{
			if (u[l] == alpha[m])
			{
				_putchar(beta[m]);
				counter++;
				p = 1;
			}
		}
		if (!p)
		{
			_putchar(u[l]);
			counter++;
		}
	}
	return (counter);
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
