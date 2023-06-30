#include "main.h"

/**
 * _strncat - concstenstes 2 strings
 * @dest: the string to be appended on
 * @src: the string to be to dest
 * @n: the number of bytes of src
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
