#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @nb: the integer
 * Return:  the value of the last digit.
 */
int print_last_digit(int nb)
{
	int y;

	if (nb < 0)
		nb = -nb;

	y = nb % 10;
	_putchar(y + 48);
	return (y);
}
