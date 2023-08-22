#include "main.h"
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
