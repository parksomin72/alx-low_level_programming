#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: the input string
 */
void puts_half(char *str)
{
	int n, len;

	len = 0;
	while (str[len])
		len++;

	n = len / 2;
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
