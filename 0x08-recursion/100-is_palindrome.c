#include "main.h"

/**
 * _strlen_recursion - returns length of recursion
 * @s: string
 * Return: int the lenghth of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * cmp - compares each char of string
 * @s: string
 * @i: iteration
 * @j: iteration
 * Return: int
 */
int cmp(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
		{
			return (1);
		}
		return (0 + cmp(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if string is pallindrome or not
 * @s: string
 * Return: 1 if pallindrome 0 if not (int)
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (cmp(s, 0, _strlen_recursion(s) - 1));
}
