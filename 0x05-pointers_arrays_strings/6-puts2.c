#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: the input string
 */
void puts2(char *str)
{
	int i, len;

	len = 0;
	while (str[len])
		len++;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
