#include "main.h"
#include <stdio.h>

/*
 * _strlen - returns length of a string
 * @str: string to get length
 * Return: string length
 */
size_t _strlen(const char *str)
{
	size_t l = 0;

	while (*str++)
	{
		l++;
	}
	return (l);
}
