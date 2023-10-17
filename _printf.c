#include "main.h"

/**
 * _printf - printf function
 * @format: the printed string
 * Return: the length of printed characters
 */
int _printf(const char *format, ...)
{
	int count;

	va_list args;

	va_start(args, format);

	count = 0;

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
					return (-1);
				}
			count += handle_format(format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
