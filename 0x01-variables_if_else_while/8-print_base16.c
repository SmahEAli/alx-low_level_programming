#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - prints 0-9,a-f
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	char c;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++ )
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
