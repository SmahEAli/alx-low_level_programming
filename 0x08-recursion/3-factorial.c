#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: int input
 * Return: Always 0 (Success) n!
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
