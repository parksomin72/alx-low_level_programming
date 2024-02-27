#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	char *MyString = str;

	while (*MyString != '\0')
	{
		printf("%c", *MyString);
		MyString++;
	}
	printf("\n");
}
