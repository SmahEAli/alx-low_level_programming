#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - prints the alphabetics
 *
 * Return: 0(Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0); }
