#include "main.h"

/**
 * _abs - absolute value of an int
 * @c: the no. of computed
 * Return: absolute value of a no. or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int a_v;

		a_v = c * -1;
		return (a_v);
	}
	return (c);
}
