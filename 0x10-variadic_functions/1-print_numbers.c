#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints no. & \n
 * @separator: string btw no.s
 * @n: no. of int passed
 * @...: var of string
 * Return: void if seperator == NULL don't print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list no;
	unsigned int i;

	va_start(no, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(no, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(no);
}
