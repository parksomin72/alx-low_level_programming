#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string.
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
