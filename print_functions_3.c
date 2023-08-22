#include "main.h"
/**
 * ppointer - prints a pointer
 * @list; variable args list
 * @counter: counter variable
 * Return: a
 */
int ppointer(va_list list, int *counter)
{
	long long int p = long long int(va_arg(list, void *));
	int a, index = 0, i;
	long long int arr[12];
	char *array = "0123456789abcdef";

	while (index < 12)
	{
		arr[index] = p %= 16;
		p /= 16;
		index++;
	}
	_putchar('0');
	_putchar('x');
	index--;

	while (index >= 0)
	{
		for (i = 0; i < 16; i++)
		{
			if ((int)arr[index] == i)
				putchar(array[i]);
		}
		index--;
	}
	a = *counter + 14;
	return (a);
}
