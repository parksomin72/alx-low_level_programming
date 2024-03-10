#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (Seccuss)
 */
int main(void)
{
	char letters = 'a';
	char alpha = 'A';

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
