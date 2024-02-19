#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n:
 */
void print_times_table(int n)
{
	int i, j, m;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			m = i * j;

			if (j == 0)
				_putchar(m + '0');
			if (m < 10 && j != 0)
				printf(",   %d", m);
			if (m >= 10 && m < 100)
				printf(",  %d", m);
			if (m >= 100)
				printf(", %d", m);
		}
		_putchar('\n');
	}
	}
}
