#include "main.h"
#include <stdio.h>

/**
 * _strcat - concstenstes 2 strings
 * @dest: the destination string
 * @src: the string source
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
