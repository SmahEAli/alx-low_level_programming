#include <stdio.h>

/**
 * main - prints name of the file it was compiled from
 * Return: void Always (0) Success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
