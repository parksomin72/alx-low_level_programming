#include <stdio.h>
#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: the input string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
