#include "main.h"
/**
 * _isdigit -check if a char is a digit
 * @x: number to be checked
 * Return: 1 for digit char or 0 for else
 */
int _isdigit(int x)
{
	if (x >= 48 && x<= 57)
	{
		return (1);
	}
	return (0);
}
