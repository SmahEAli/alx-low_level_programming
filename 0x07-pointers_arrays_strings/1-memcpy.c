#include "main.h"

/**
 * _memcpy() - function copies n bytes from src to dest
 * @dest: destination input
 * @src: source input
 * @n: number of byte n inputs
 * Return: char ALways 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
