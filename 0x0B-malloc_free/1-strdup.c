#include "main.h"
#include <stdlib.h>

/**
 * _strdup - string duplicated parameter
 * @str: the string to copy
 * Return: string
 */
char *_strdup(char *str)
{
	int c = 0, i = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (c < i)
	{
		s[c] = str[c];
		c++;
	}
	s[c] = '\0';
	return (s);
}
