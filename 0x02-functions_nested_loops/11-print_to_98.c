#include "main.h"

/**
 * print_number - Helper function that print integer
 * @nb: The integer to print.
 */
void print_number(int nb)
{
	if (nb < 0)
	{
		_putchar('-');
		nb = -nb;
	}
	if (nb >= 10 &&  nb < 100)
	{
		_putchar((nb / 10) + 48);
		_putchar((nb % 10) + 48);
	}
	else if (nb >= 100)
	{
		_putchar((nb / 100) + 48);
		_putchar(((nb / 10) % 10) + 48);
		_putchar((nb % 10) + 48);
	}
	else
		_putchar(nb + 48);
}

/**
 * print_to_98 - Prints all numbers from `n` to 98, followed by a newline.
 * @n: Starting integer
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		print_number(n);
		if (n > 98)
			n--;
		else
			n++;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
