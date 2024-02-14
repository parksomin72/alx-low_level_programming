#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase.
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char alphabet_x10;

	for (i = 0; i < 10; i++)
	{
		for (alphabet_x10 = 'a'; alphabet_x10 <= 'z'; alphabet_x10++)
			_putchar(alphabet_x10);
		_putchar('\n');
	}
}
