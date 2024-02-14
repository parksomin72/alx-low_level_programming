#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: the number that checks.
 * Return: 1 is n greater than zero, 0 is n zero, -1 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
