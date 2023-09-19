#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination of the string
 * @src: dourse of the string
 * Return: char the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
