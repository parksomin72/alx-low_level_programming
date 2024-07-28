#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: the integer
 * Return:  the value of the last digit.
 */
int print_last_digit(int n)
{
	if (n == -2147483648)
	{
		n = 147483648;
		_putchar(n % 10);
	}
	if (n < 0)
	{
		n = -n % 10;
		_putchar(n + 48);
	}
	else if (n > 0)
	{
		n = n % 10;
		_putchar(n + 48);
	}
	else
		_putchar(n + 48);
	return (n);
}
