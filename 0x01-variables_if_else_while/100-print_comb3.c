#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1;

	num = 0;

	while (num <= 8)
	{
		num1 = num + 1;
		while (num1 <= 9)
		{
			putchar(num + 48);
			putchar(num1 + 48);
			if (num != 8 || num1 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			num1++;
		}
		num++;
	}
	putchar('\n');

	return 0;
}
