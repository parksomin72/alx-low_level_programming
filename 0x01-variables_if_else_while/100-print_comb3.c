#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = 0, a = 0;

	for (; b <= 9; b++)
	{
		for (; a <= 9; a++)
		{
			int j = 1;
			for (; j <= 9; j++)
			{
				if (j > a)
				{
					putchar(a + 48);
					putchar(j + 48);
					if (j != 9 || a != 8)
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
