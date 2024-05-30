#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int alpha, number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
