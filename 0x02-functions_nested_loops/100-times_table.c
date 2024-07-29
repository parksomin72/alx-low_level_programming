#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int a = 0;

		while (a <= n)
		{
			int b = 0;

			while (b <= n)
			{
				int res = a * b;

				if (b == 0)
					printf("%d", res);
				if (res < 10 && b != 0)
					printf(",   %d", res);
				else if (res >= 10 && res < 100)
					printf(",  %d", res);
				else if (res >= 100)
					printf(", %d", res);
				b++;
			}
			printf("\n");
			a++;
		}
	}
}
