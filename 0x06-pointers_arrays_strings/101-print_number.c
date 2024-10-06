#include "main.h"
/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else if (n >= 0 && n <= 9)
		_putchar(n + 48);
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
