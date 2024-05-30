#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: always 0 (Success).
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
