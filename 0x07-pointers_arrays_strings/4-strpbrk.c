#include <stdio.h>
#include "main.h"

/**
 * _strpbrk: search for string for any of set of bytes
 * @s: string s
 * @accept: string accept
 * Return: Always 0 returns pointer s or NULL
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
