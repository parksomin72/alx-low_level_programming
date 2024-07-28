#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: the integer
 * Return:  the value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	n = n % 10;
	_putchar(n + 48);
	return(n);
}
