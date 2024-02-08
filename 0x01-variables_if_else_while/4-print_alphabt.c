#include <stdio.h>
/**
 * main - Entry point
 * putchar - prints the alphabet in lowercase.
 *
 * Return: Always Success 0
 */
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');
	return (0);
}
