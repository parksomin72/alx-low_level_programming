#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'A';

	for(; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
