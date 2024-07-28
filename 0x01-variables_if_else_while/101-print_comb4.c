#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 1;

		while (b < 10)
		{
			int c = 2;

			while (c < 10)
			{
				if (a < b && b < c)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);
					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
