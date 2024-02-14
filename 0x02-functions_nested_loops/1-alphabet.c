#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase.
 */
void print_alphabet(void)
{
	int letters = 'a';

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
