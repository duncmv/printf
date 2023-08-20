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
<<<<<<< HEAD:_printf.c
		{"o", poctal},
		{"u", pudecint},
		{"x", phex},
		{"X", pHex},
		{"b", pbinary}
=======
		{"b", pbinary},
		{"r", preversed},
		{"%R", prot13},
>>>>>>> a787aa64998c779c4d855c3c65803e3ef73ebd24:test/_printf.c
	};

	va_start(args, format);

	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
<<<<<<< HEAD:_printf.c
			for (i = 0; i < 10; i++)
=======
			for (i = 0; i < 8; i++)
>>>>>>> a787aa64998c779c4d855c3c65803e3ef73ebd24:test/_printf.c
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
