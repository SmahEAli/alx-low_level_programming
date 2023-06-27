#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random passwords for program 101-crackme
 * Returns: 0 (Success)
 */
int main(void)
{
	char pwd[84];
	int i = 0, sum = 0, d_h1, d_h2;

	srand(time(0));
	while (sum < 2772)
	{
		pwd[i] = 33 + rand() % 94;
		sum += pwd[i++];
	}
	pwd[i] = '\0';
	if (sum != 2772)
	{
		d_h1 = (sum - 2772) / 2;
		d_h2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			d_h1++;
		}
			for (i = 0; pwd[i]; i++)
			{
				if (pwd[i] >= (33 + d_h1))
				{
					pwd[i] -= d_h1;
					break;
				}
			}
			for (i = 0; pwd[i]; i++)
			{
				if (pwd[i] >= (33 + d_h2))
				{
					pwd[i] -= d_h2;
					break;
				}
			}	
	}
	printf("%s", pwd);
	return (0);
}
