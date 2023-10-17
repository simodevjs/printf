#include "main.h"
#DEFINE MAP -1
/**
 * _printf - printf function
 * @format: the printed string
 * Return: the length of printed characters
 */
int _printf(const char *format, ...)
{
	int sum;

	va_list args;

	va_start(args, format);

	sum = 0;

	if (!format)
	{
		return (-1);
	}

	while (*format)
	{
		if (*format == '%')
		{
			format++;
				if (*format == '\0')
				{
					return (MAP);
				}
			sum += S_M_FORMAT(format, args);
		}
		else
		{
			sum += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (sum);
}
