#include <stdio.h>

/**
 * main - prints
 * Return: void
 */
int main(void)
{
	int i = 0, x = 1, y = 2;

	while (i <= 50)
	{
		if (i == 1)
		{
			printf("%d", x);
		}
		else if (i == 2)
		{
			printf(", %d", y);
		}
		else
		{
			y = y + x;
			x = y - x;
			printf(", %d", y);
		}
	++i;
	}
	printf("\n");
	return (0);

}
