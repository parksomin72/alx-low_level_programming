#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (Seccuss)
 */
int main(void)
{
	char letters = 'a';

	for (letters = 'a'; letters <= 'z', letters++)
	{
		if (letters != 'e' && letters != 'q')
			putchar(letters);
	}
	putchar('\n');
	return (0);
}
