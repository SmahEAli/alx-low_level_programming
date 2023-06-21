#include "main.h"

/**
 * _islower - checks the lowercase char
 * @c: is the char to be checked
 * Return: 1 for islower or 0 for anything
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
