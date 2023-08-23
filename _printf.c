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

	frmt arr[] = {{"c", pchar}, {"s", pstring}, {"%", ppercent},
		{"d", pdecint},	{"i", pdecint},	{"o", poctal},
		{"u", pudecint}, {"x", phex}, {"X", pHex},
		{"b", pbinary}, {"S", pspecial}, {"R", prot13}, {"r", psrev}
	};

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; i < 13; i++)
			{
				if (*format == arr[i].spec[0])
				{
					counter = arr[i].f(args, &counter);
					break;
				}
			}
			if (i == 13)
			{
				counter = arr[2].f(args, &counter);
				format--;
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
