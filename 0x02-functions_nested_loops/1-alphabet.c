#include "main.h"
/**
 * print_alphabet -  prints the alphabet, in lowercase
 */
void  print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
