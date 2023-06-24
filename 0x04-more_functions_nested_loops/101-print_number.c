#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: int to prints
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int l = n;

	if (n < 0)
	{
		n *= -1;
		l = n;
		_putchar('-');
	}
	l /= 10;
	if (l != 0)
	{
		print_number(l);
	}
	_putchar((unsigned int) n % 10 + '0');
}
