#include <unistd.h>

/**
 * _putchar - writes char c
 * @c: The char to print
 * Return: 1 (Success)
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
