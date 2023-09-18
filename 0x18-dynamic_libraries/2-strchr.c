#include "main.h"
#include <stdio.h>

/**
 * _strchr - functionn the located a character in a string
 * @s: string s
 * @c: char c of first occurrence
 * Return: pointer of c or NULL is char is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
