#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int N, M, X;

	for (N = 0; N < 10; N++)
	{
		for (M = 0; M < 10; M++)
		{
			for (X = 0; X < 10; X++)
			{
				if (X > M && M > N)
				{
				putchar(N + '0');
				putchar(M + '0');
				putchar(X + '0');
				if (X != 9 || M != 8 || N != 7)
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
