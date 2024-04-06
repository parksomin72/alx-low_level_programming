#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x, y, z;

	for (z = 0; z < 10; z++)
	{
		int j;

		j = z % 10;

		for (i = 0; i < 100; i++)
		{
			x = i / 10;
			y = i % 10;
			if (j < x && x < y)
			{
				putchar(j + '0');
				putchar(x + '0');
				putchar(y + '0');
				if (j != 7)
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
