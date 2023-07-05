#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns natual sqrt of a no.
 * @n: int
 * Return: Natural int sqrt Always 0
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
