#include "main.h"

/**
 * _puts - returns a string
 * @str: its the char
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
