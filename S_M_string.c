#include "main.h"
/**
 * S_M_string - SEIF SIMO String printer
 * @str: the string
 * Return: The lengh
 */

int S_M_string(char *str)
{
	int i;
	char *null;
	int sum = 0;

	if (str == NULL)
	{
		null = "(null)";

		for (i = 0; i < 6; i++)
		{
			_putchar(*null);
			null++;
		}
		return (6);
	}
	while (*str)
	{
		_putchar(*str);
		sum++;
		str++;
	}

	return (sum);
}
