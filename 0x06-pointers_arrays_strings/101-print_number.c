#include "main.h"

/**
 * print_number - prints an integer
 * @n: int pointer
 * Return: void
 */
void print_number(int n)
{
	unsigned int nn = n;

	if (n < 0)
	{
		_putchar('-');
		nn = -nn;
	}
	if ((nn / 10) > 0)
	{
		print_number(nn / 10);
	}
	_putchar((nn % 10) + '0');
}
