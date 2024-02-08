#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always Succes 0
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
