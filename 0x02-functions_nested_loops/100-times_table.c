#include "main.h"

/**
 * print_times_table - prints the time table of input n,
 * starting with 0.
 * @n: the value of the xtable
 */
void print_times_table(int n)
{
	int num, mul, x;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');
				x = num * mul;
				if (x <= 99)
					_putchar(' ');
				if (x <= 9)
					_putchar(' ');
				if (x >= 100)
				{
					_putchar((x / 100) + '0');
					_putchar(((x / 10)) % 10  + '0');
				}
				else if (x <= 99 && x >= 10)
				{
					_putchar((x / 10) + '0');
				}
				_putchar((x % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
