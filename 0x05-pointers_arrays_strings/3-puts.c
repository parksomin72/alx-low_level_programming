#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
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
