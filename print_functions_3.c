#include "main.h"
/**
 * pspecial - prints special characters in hex
 * @list: variable args list
 * @counter: counter variable
 * Return: a
 */
int pspecial(va_list list, int *counter)
{
	char *p = va_arg(list, char *);
	int a = *counter, index = 0, tmp, i, j, ar[2];
	char *array = "0123456789ABCDEF";

	for (i = 0; p[i] != '\0'; i++)
	{
		if ((p[i] > 0 && p[i] < 32) || p[i] >= 127)
		{
			tmp = (int)p[i];
			while (index < 2)
			{
				ar[index] = tmp %= 16;
				tmp /= 16;
				index++;
			}
			_putchar('\\');
			_putchar('x');
			index -= 1;
			
			while (index >= 0)
			{
				for (j = 0; j < 16; i++)
				{
					if (ar[index] == j)
					_putchar(array[j]);
				}
				index -= 1;
			}
			a += 4;
		}
		else
		{
			_putchar(p[i]);
			a++;
		}
	}
	return (a);
}
/**
 * psrev - str in reverse
 * @args: allocated printf arguments
 *
 * Return: the string
 */
int psrev(va_list args, int *m)
{
	char *s = va_arg(args, char*);
	int l = 0, counter = *m;

	while (s[l] != '\0')
	{
		l++;
		counter++;
	}
	for (l -= 1; l >= 0; l--)
		_putchar(s[l]);
	return (counter);
}
