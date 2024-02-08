#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always Success 0
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
