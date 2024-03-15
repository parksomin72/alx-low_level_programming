#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 * Return: always 0 (Seccuss)
 */
int main(void)
{
	char letters;
	int N;

	for (N = 0; N < 10; N++)
		putchar(N + '0');
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
