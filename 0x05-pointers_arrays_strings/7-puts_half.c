#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: the input string
 */
void puts_half(char *str)
{
	int n, length_of_the_string, len = 0;

	while (str[len])
		len++;

	length_of_the_string = len;
	if (len % 2 == 0)
		n = length_of_the_string / 2;
	else
		n = (length_of_the_string - 1) / 2 + 1;

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
