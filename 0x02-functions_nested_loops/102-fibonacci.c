#include <stdio.h>

/**
 * main - prints
 * Return: void
 */
int main(void)
{
	int i = 0;
	long x = 1, y = 2;

	while (i <= 50)
	{
		if (i == 1)
		{
			printf("%ld", x);
		}
		else if (i == 2)
		{
			printf(", %ld", y);
		}
		else
		{
			y = y + x;
			x = y - x;
			printf(", %ld", y);
		}
	++i;
	}
	printf("\n");
	return (0);

}
