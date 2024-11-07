#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1;

	num = 0;

	while (num < 99)
	{
		num1 = num + 1;
		while (num1 < 100)
		{
			putchar(num / 10 + 48);
			putchar(num % 10 + 48);
			putchar(' ');
			putchar(num1 / 10 + 48);
			putchar(num1 % 10 + 48);
			if (num != 98)
			{
				putchar(',');
				putchar(' ');
			}
			num1++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
