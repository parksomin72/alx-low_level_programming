#include "main.h"
/**
 * times_table -  prints the 9 times table
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int m;

			m = i * j;

			if (j == 0)
			{
			/*_putchar(i + '0');*/
			_putchar(m + '0');
			}
			if (m < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else
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
