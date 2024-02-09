#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int j;

	for (n = 48; n <= 55; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			for (j = 50; j <= 57; j++)
			{
				if (m > n && j > m && j > n)
				{
				putchar(n);
				putchar(m);
				putchar(j);
				if (n != 55 || m != 56 || j != 57)
				{
				putchar(',');
				putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
