#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a, b, m;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			m = a * b;

			if (b == 0)
			{
				_putchar(m + '0');
			}
			if (m < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
