#include "main.h"

/**
 * _strcmp - compares string
 * @s1: 1st string pointer
 * @s2: 2nd string pointer
 * Return: unmshed, 0. or -ve/ +ve
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
