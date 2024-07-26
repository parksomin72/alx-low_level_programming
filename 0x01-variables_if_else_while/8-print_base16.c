#include <stdio.h>
/**
 * main - Etry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	char alpha = 'a';

	for (; a < 10; a++)
		putchar(a + 48);
	for (; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
