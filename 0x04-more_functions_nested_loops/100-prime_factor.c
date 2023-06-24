#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factors of 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long x, l_pf, n = 612852475143;
	double pow = sqrt(n);

	for (x = 1; x <= pow; x++)
	{
		if (n % x == 0)
		{
			l_pf = n / x;
		}
	}
	printf("%ld\n", l_pf);
	return (0);
}
