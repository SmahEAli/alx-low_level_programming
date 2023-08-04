#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: pointer
 * @index: index from 0
 * Return: 1 (Success) or -1 (Error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
