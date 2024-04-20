#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int N;
	char alphabet;

	for (N = 0; N < 10; N++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
