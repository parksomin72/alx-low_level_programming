#include "main.h"
/**
 *  print_last_digit - prints the last digit of a number.
 * @n: the integer that check.
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int j;
	
	if (n == 0)
	{
		_putchar(n + '0');
	}
	else if (n != 0)
	{
		if (n > 0)
		{
			j = n % 10;
			_putchar(j + '0');
		}
		else if (n < 0)
		{
			n = -n;
			j = n % 10;
			_putchar(j + '0');
		}
	}
	return (j);
}
