#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * main - Prints the x of 2 argument no.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int n = 0, n1 = 0;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		n1 = atoi(argv[2]);
		printf("%d\n", n * n1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
