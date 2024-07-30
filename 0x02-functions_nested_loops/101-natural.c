#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, res = 0;

	while (a <= 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			res = res + a;
		}
		a++;
	}
	printf("%d\n", res);
	return (0);
}
