#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: the input string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		if (str[i + 2] == '\0')
			break;
		i += 2;
	}
	_putchar('\n');
}
