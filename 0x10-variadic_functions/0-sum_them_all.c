#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: no. of parameters passed
 * @...: a variable for sum  no. of parameters
 * Return: Always 0 (Success) int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum = 0;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(p, int);
	}
	va_end(p);
	return (sum);

}
