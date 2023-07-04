#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of 2 diagonals of a square matrix of int
 * @a: array input
 * @size: input array size
 * Return: Always 0 Success void
 */
void print_diagsums(int *a, int size)
{
	int i, j, t1 = 0, t2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		t1 = t1 + a[i];
	}
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		t2 = t2 + a[j];
	}
	printf("%d, %d\n", t1, t2);
}
