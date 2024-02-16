#include "main.h"
/**
 *  print_last_digit - prints the last digit of a number.
 * @n: the integer that check.
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;

	if (j == 0)
	{
		_putchar(j + '0');
	}
	else if (j != 0)
	{
		if (j > 0)
		{
			_putchar(j + '0');
		}
		else if (j < 0)
		{
			j = -j;
			_putchar(j + '0');
		}
	}
	return (j);
}
