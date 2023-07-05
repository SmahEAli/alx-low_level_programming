#include "main.h"

/**
 * _sqrt_recursion - returns natual sqrt of a no.
 * @n: int
 * Return: Natural int sqrt Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n));
}
