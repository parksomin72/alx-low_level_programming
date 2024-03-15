#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse.
 * Return: always 0 (Seccuss)
 */
int main(void)
{
	char letters = 'z';

	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);
	putchar('\n');
	return (0);
}
