#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: input string
 * @needle: input substring
 * Return: pointer to beginning of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack, *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
