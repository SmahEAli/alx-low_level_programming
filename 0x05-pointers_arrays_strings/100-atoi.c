#include "main.h"

/**
 * _atoi - converts string to int
 * @s: the pointer of conversion
 * Return: int
 */
int _atoi(char *s)
{
	int c = 0, min = 1, si = 0;
	unsigned int n = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			si = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}
		if (si == 1)
		{
			break;
		}
		c++;
	}
	n *= min;
	return (n);
}
