#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	char *string = s;

	while (*string != '\0')
	{
		string++;
	}
	return (string - s);
}
