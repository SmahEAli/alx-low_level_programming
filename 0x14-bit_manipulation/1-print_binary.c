#include "main.h"

/**
 * print_binary - fn prints the binary representation of a number
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int j, c = 0;
	unsigned long int i;

	for (j = 63; j >= 0; j--)
	{
		i = n >> j;
		if (i & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
