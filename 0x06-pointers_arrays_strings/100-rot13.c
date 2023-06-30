#include "main.h"

/**
 * rot13 - encodes rot13
 * @st: string
 * Return: char
 */
char *rot13(char *st)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = st;

	while (*st)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*st == rot13[i])
			{
				*st = ROT13[i];
				break;
			}
		}
		st++;
	}
	return (ptr);
}
