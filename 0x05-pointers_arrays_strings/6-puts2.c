#include "main.h"
#include <stdio.h>

/**
 * puts2:  function that prints every other character of a string
 * @str : string that print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		/*if (str[i] % 2 == 0)*/
			printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
