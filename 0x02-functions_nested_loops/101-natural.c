#include <stdio.h>

/**
 * main - prints sim of multiple of 3,5 until 1024
 * Return: 0 (Success)
 */
int main(void)
{
	int i, x = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			x = x + i;
		}
	i++;
	}
	printf("%d\n", x);
	return (0);
}
