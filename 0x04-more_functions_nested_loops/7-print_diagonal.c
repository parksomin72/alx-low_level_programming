#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, a;
	char c = 92;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (a = 1; a <= i; a++)
			{
			_putchar(' ');
			}
			_putchar(c);
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
