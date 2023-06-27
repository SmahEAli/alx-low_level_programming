#include "main.h"

/**
 * re_string - Reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char m;

	while (s[i++])
	{
		l++;
	}
	for (i = l - 1; i >= l / 2; i--)
	{
		m = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = m;
	}
}
