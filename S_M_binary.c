#include "main.h"
#define NOPO 0

/**
 * S_M_binary - SEIF SIMO binary printer
 * Return: number of characters already printed
 */

int S_M_binary(unsigned int numb)
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
	while (numb > 0)
	{
		bin[i] = numb % 2;
		numb = numb / 2;
		i++;
	}
	z = i - 1;
	while (z >= 0)
	{
		_putchar(bin[z] + '0');
		sum++;
		z--;
	}
	return (sum);
}
