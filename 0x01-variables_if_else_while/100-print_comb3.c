#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int N, X;

	for (N = 0; N < 10; N++)
	{
		for (X = 1; X < 10; X++)
		{
			if (X > N)
			{
			putchar(N + '0');
			putchar(X + '0');
			if (N != 8 || X != 9)
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
