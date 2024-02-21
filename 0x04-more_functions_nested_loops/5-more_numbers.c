#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 */
void more_numbers(void)
{
	int t, n;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('1');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
