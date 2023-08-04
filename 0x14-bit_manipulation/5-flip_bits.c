#include <main.h>

/**
 * flip_bits - returns no. of bits to flip
 * @n: int
 * @m: int
 * Return: Always 0(Success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int b1, b2 = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		b1 = b2 >> i;
		if (b1 & 1)
			c++;
	}
	return (c);
}
