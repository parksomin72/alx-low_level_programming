#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n:
 */
void print_times_table(int n)
{
	int i, j, m;

	if (n < 15 && n > 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			m = i * j;

			if (m < 10)
				printf("%d,  ", m);
			if (m >= 10)
				printf("%d, ", m);
		}
		_putchar('\n');
	}
	}
}
