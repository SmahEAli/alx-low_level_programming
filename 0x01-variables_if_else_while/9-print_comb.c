#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - prints combination(cb) of single-digit numbers
 *
 * Return: 0(Success)
 */
int main(void)
{
	int cb;

	for (cb = '0'; cb <= '9'; cb++)
	{
		putchar(cb);
		if (cb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
