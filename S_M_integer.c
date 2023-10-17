#include "main.h"
#define NOP 0
#define LM 12
/**
 * S_M_integer - SEIF SIMO integer printer
 * @num: the integer
 * Return: The lengh
 */

int S_M_integer(int num)
{
	int i, end, start, rapp;
	char buff[LM];
	int pos = 0;
	char tmp;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == NOP)
	{
		buff[pos] = '0';
		pos++;
	}
	while (num > 0)
	{
		rapp = num % 10;
		buff[pos] = rapp + '0';
		pos++;
		num = num / 10;
	}
	start = NOP;
	end = pos - 1;
	while (start < end)
	{
		tmp = buff[start];
		buff[start] = buff[end];
		buff[end] = tmp;
		start++;
		end--;
	}
		buff[pos] = '\0';
	for (i = 0; i < pos; i++)
		_putchar(buff[i]);
	return (pos);
}
