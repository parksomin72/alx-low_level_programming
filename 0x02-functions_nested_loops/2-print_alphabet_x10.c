#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	char alphabet, N;

	for (N = 0; N < 10; N++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}