#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int rev_str = 0;
	int i;

	while (*s != '\0')
	{
		rev_str++;
		s++;
	}
	s--;
	for (i = rev_str; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
