#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1, num2;

	num = 0;

	while (num <= 7)
	{
		num1 = num + 1;
		while (num1 <= 8)
		{
			num2 = num1 + 1;
			while (num2 <= 9)
			{
				putchar(num + 48);
				putchar(num1 + 48);
				putchar(num2 + 48);
				if (num != 7 || num1 != 8 || num2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				num2++;
			}
			num1++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
