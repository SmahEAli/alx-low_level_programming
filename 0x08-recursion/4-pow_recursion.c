#include "main.h"

/**
 * _pow_recursion - returns value of x power y
 * @x: input int base
 * @y: input superscript int
 * Return: Always 0(Success) int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
