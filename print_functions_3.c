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
	int l, counter = *m;

	if (s == NULL)
		s = "(null)";
	while (s[counter] != '\0')
		counter++;
	for (l = counter - 1; l >= 0; l--)
		_putchar(s[l]);
	return (counter);
}
