#include "main.h"
#include <stdio.h>

int ck_prime(int j, int i);

/**
 * is_prime_number - returns if no. is prime
 * @n: input number
 * Return: Always 0 (Success) int
 */
int is_prime_number(int n)
{
	return (ck_prime(n, 1));
}

/**
 * ck_prime - checks if n is prime no.
 * @j: the no. to be checked
 * @i: iteration
 * Return: 1 for prime 0 otherwise
 */
int ck_prime(int j, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (j % i == 0 && i > 1)
	{
		return (0);
	}
	if ((j / i) < i)
	{
		return (1);
	}
	return (ck_prime(j, i + 1));
}
