#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always Success 0
 */
int main(void)
{
	int i = 0;

	do {
		putchar(i + '0');
		if (i != 9)
		putchar(',');
		putchar(' ');
		i++;
	} while (i < 10);
	putchar('\n');
	return (0);
}
