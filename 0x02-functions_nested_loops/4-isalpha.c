#include "main.h"

/**
 * _isalpha - checks if cahr is alpha
 * @c: is char to be checked
 * Return: 1 for alpha or 0
 */
int _isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
