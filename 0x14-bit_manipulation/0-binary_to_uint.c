#include <main.h>

/**
 * binary_to_uint - func to converts a binary number to an unsigned int
 * @b: pointer to 1|0
 * Return: Always 0 (Success) if !0|1 or b=NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int c;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		c = 2 * c + (b[i] - '0');
	}
	return (0);
}
