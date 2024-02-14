#include "main.h"
/**
 *  print_last_digit - prints the last digit of a number.
 * @n: the integer that check.
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n >= 0)
	{
                _putchar(n + '0');
	}
	else if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
	return (0);
}
