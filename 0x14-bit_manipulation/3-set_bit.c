#include <main.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer int
 * @index: index from 0
 * Return: 1 or -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}
