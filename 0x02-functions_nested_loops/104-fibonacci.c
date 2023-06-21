#include <stdio.h>

/**
 * main - prints fib until 98
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int  ct;
	unsigned long f1 = 0, f2 = 1, sum, f1_h1, f1_h2, f2_h1, f2_h2, h1, h2;
	
	for (ct = 0; ct < 92; ct++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);
		f1 = f2;
		f2 = sum;
	}
	f1_h1 = f1 / 10000000000;
	f2_h1 = f2 / 10000000000;
	f1_h2 = f1 % 10000000000;
	f2_h2 = f2 % 10000000000;
	for (ct = 93; ct < 99; ct++)
	{
		h1 = f1_h1 + f2_h1;
		h2 = f1_h2 + f2_h2;
		if (f1_h2 + f2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
	printf("%lu%lu", h1, h2);
	if (ct != 98)
	printf(", ");
	f1_h1 = f2_h1;
	f1_h2 = f2_h2;
	f2_h1 = h1;
	f2_h2 = h2;
	}
	printf("\n");
	return (0);
}
