#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @nb: the integer
 * Return:  the value of the last digit.
 */
int print_last_digit(int nb)
{
	int a;

	if (nb < 0)
		nb = -nb;
	a = nb % 10;

	if (a < 0)
		a = -a;
	_putchar(a + 48);
	return (a);
}
