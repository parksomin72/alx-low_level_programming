#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 100; x++)
	{
		int n, m;

		n = x % 10;
		m = x / 10;

		if (m != n && n > m)
		{
			putchar(m + '0');
			putchar(n + '0');
			if (x != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
