#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		char alpha = 'a';
		for (; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
