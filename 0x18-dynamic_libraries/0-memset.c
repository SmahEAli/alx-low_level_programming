#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area pointer
 * @b: constant char(byte)
 * @n: unsigned int to fill n bytes
 * Return: Always 0 char Success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
