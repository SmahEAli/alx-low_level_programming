#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: no.1
 * @n2: no.2
 * @r: buffer to store result
 * @size_r: buffer size
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, t, q, p = 0;

	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{
		j++;
	}
	if (i > j)
	{
		l = i;
	}
	else
	{
		l = j;
	}
	if (l + 1 > size_r)
	{
		return (0);
	}
	r[l] = '\0';
	for (k = l - 1; k >=0; k-- )
	{
		i--;
		j--;
		if (i >= 0)
		{
			t = n1[i] - '0';
		}
		else
		{
			t = 0;
		}
		if (j >= 0)
		{
			q = n2[j] - '0';
		}
		else
		{
			q = 0;
		}
		r[k] = (t + q + p) % 10 + '0';
		p = (t + q + p) / 10;
	}
	if (p == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
		{
			return (0);
		}
		while (l-- >= 0)
		{
			r[l + 1] = r[l];
		}
		r[0] = p + '0';
	}
	return (r);
}
