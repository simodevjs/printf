#include "main.h"
#define NOPO 0

/**
 * S_M_binary - SEIF SIMO binary printer
 * Return: number of characters already printed
 */

int handle_binary(unsigned int numb)
{
	int sum = 0;
	int z;
	int bin[32];
	int i = NOPO;

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		bin[i] = num % 2;
		num = numb / 2;
		i++;
	}
	s = i - 1;
	while (z >= 0)
	{
		_putchar(bin[s] + '0');
		sum++;
		z--;
	}
	return (sum);
}
