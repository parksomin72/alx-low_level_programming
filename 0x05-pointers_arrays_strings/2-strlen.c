#include "main.h"
/**
 * _strlen -  function that returns the length of a string.
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	char *start;

	start = s;

	while (*s)
		s++;
	return (s - start);
}
