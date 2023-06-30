#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array of int
 * @n: no. of elements
 */
void reverse_array(int *a, int n)
{
	int mem, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		mem = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = mem;
	}
}
