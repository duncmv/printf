#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1000;

    _printf("%d\n", 98);
    _printf("%o\n", 98);
    _printf(NULL);
    _printf("%x\n", 53698);
    _printf("%X\n", 53698);
    _printf("%b\n", 98);
    _printf("This is 1000 in binary %b\n", a);
    _printf("%b\n", 1000);
    return (0);
}
