#include <main.h>

/**
 * get_bit - fn that returns the value of a bit at a given index
 * @n: int
 * @index: index from 0
 * Return: index or -1(error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = (n >> index) & 1;
	return (b);
}
