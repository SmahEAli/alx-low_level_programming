#include "main.h"

/**
 * print_las_digit - prints last digit of a no.
 * @n: no. to be changed
 * Return: last value of the no.
 */
int print_last_digit(int n)
{
	int l_v;

	l_v = n % 10;
	if (l_v < 0)
	{
		l_v = l_v * -1;
	}
	_putchar(l_v + '0');
	return (l_v);
}
