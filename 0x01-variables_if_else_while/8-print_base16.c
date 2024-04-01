#include <stdio.h>
/**
 * main - Enty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x, y;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	for (y = 'a'; y < 'j'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
