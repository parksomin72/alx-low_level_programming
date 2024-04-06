#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x, y, j;

	for (j = 0; j < 100; j++)
	{
		int z, k;

		z = j / 10;
		k = j % 10;

	for (i = 0; i < 100; i++)
	{
		x = i / 10;
		y = i % 10;

		if (x == 0 && y == 0)
		{
		putchar(z + '0');
		putchar(k + '0');
		putchar(' ');
		putchar(x + '0');
		putchar(y + '0');
		
		if (j != 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	}
	putchar('\n');

	return (0);
}
