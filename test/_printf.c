#include "main.h"
/**
 * _printf - function that does printf
 * @format: pointer to string
 *
 * Return: no of characters printed
 */
int _printf(const char *format, ...)
{
	int counter = 0, i;

	va_list args;

	frmt arr[] = {
		{"c", pchar},
		{"s", pstring},
		{"%", ppercent},
		{"d", pdecint},
		{"i", pdecint},
		{"b", pbinary},
		{"r", preversed},
		{"%R", prot13},
	};

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; i < 8; i++)
			{
				if (*format == arr[i].spec[0])
					counter = arr[i].f(args, &counter);
			}
			format++;
		}
		else
		{
			_putchar(*format);
			counter++;
			format++;
		}
	}
	va_end(args);
	return (counter);
}

