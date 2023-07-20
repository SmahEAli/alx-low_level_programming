#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings & \n
 * @separator: string btw strings
 * @n: n0. of strings
 * @...: variable no. of strings
 * Return: void */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ss;
	char *s;
	unsigned int i;

	va_start(ss, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ss, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ss);
}
