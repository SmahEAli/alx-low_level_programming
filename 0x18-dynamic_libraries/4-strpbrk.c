#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - search for string for any of set of bytes
 * @s: input string s
 * @accept: input string accept
 * Return: Always 0 returns pointer s or NULl
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
