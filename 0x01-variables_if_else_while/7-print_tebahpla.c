#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'z'; x <= 'a'; x--)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
