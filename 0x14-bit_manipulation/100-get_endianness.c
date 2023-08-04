#include "main.h"

/**
 * get_endianness - fn for checking endianness
 * Return: 0 for big or 1 for small
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char *) &e;

	return (*c);
}
