#include "main.h"
#include <stdio.h>

/**
 * leet - encode 1337
 * @e: input
 * Return: char
 */
char *leet(char *e)
{
	int i, j;
	char s1[] = "aAeEoOtTlL", s2[] = "4433007711";

	for (i = 0; e[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (e[i] == s1[j])
			{
				e[i] = s2[j];
			}
		}
	}
	return (e);
}
