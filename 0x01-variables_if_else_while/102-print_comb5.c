#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = 0;

	for (; b < 100; b++)
	{
		int a = 0;

		for (; a < 100; a++)
		{
			if (b < a)
			{
				putchar(b / 10 + 48);
				putchar(b % 10 + 48);
				putchar(' ');
				putchar(a / 10 + 48);
				putchar(a % 10 + 48);
				if ((b != 98 || a != 99))
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
