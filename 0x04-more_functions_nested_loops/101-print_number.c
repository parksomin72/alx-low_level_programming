#include "main.h"

void print_number(int n)
{
	int a, b;

	if (n >= 0 && n < 10)
	{
	_putchar(n + '0');
	}
	else if (n < 0)
	{
		n = -n;
		a = n / 10;
		b = n % 10;
		_putchar('-');
		_putchar(a + '0');
		_putchar(b + '0');
	}
	else if (n >= 10 && n <= 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) +'0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 100) +'0');
	}
	else if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
}
