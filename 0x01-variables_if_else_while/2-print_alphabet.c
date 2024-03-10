#include <stdio.h>
/**
 * main - Entry point.
 * Return: always 0 (Seccuss)
 */
int main()
{
	char letters = 'a';

	for(letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
