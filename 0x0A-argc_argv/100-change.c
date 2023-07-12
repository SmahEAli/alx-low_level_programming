#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum no. of coins for change
 * @argc: no. of arguments
 * @argv: array of pointers to arguments
 * Return: if !==1, Error (1), if -ve (0)
 */
int main(int argc, char *argv[])
{
	int c, o = 0;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	while (c > 0)
	{
		o++;
		if ((c - 25) >= 0)
		{
			c -= 25;
			continue;
		}
		if ((c - 10) >= 0)
		{
			c -= 10;
			continue;
		}
		if ((c - 5) >= 0)
		{
			c -= 5;
			continue;
		}
		if ((c - 2) >= 0)
		{
			c -= 2;
			continue;
		}
		c--;
	}
	printf("%d\n", o);
	return (0);
}
