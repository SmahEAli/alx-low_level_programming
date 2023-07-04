#include "main.h"

/**
 * _strspn - functionn that gets the len of prefix substring
 * @s: segment of char s
 * @accept: char byte
 * Return: no. of bytes in s consisting of only bytes from accept char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n , v, ck;

	v = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		ck = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				v++;
				ck = 1;
			}
		}
		if (ck == 0)
		{
			return (v);
		}
	}
	return (v);
}
