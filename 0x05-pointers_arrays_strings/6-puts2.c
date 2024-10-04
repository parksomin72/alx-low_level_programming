#include <stdio.h>
#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: the input string
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len])
		len++;

	while (i <= len - 1)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
