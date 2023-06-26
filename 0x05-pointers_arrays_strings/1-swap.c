#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second interger to be swapped.
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int mem = *a;
	*a = *b;
	*b = mem;
}
