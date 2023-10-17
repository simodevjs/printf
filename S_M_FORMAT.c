#include "main.h"

/**
 * S_M_FORMAT - SEIF SIMO FORMAT HANDLER
 * @format: pointer current format spec
 * @args: va_list of arguments
 *
 * Return: number of characters already printed
 */
int S_M_FORMAT(const char *format, va_list args)
{
	int sum = 0;
	int num;

	if (*format == 'c')
	{
		sum += _putchar(va_arg(args, int));
	}
	else if (*format == 's')
	{
		sum = S_M_string(va_arg(args, char *));
	}
	else if (*format == '%')
	{
		sum += _putchar('%');
	}
	else if (*format == 'd' || *format == 'i')
	{
		num = va_arg(args, int);
		sum += S_M_integer(num);
	}
	else if (*format == 'b')
	{
		num = va_arg(args, unsigned int);
		sum += S_M_binary(num);
	}
	else
	{
		write(1, "%", 1);
		_putchar(*format);
		sum += 2;
	}
	return (sum);
}
