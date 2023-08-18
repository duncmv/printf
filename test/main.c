#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;


	len = 0;
	len2 = printf("Let's try to %% printf a simple sentence.\n");
	_printf("%d\n", len);
	_printf("%d\n", len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	len2 = _printf("String%%:[%s]\n", "I am a string !");
	len = printf("String%%:[%s]\n", "I am a string !");

	_printf("%i\n", len);
	_printf("%i\n", len2);
	return (0);
}
