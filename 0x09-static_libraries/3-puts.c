#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: string to print
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
