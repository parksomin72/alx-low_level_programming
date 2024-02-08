#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always Success
 */
int main(void)
{
	int numbers = 0;
	char letters = 'a';

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar(numbers + '0');
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
