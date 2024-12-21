#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s || *s == '\0')
		return (0);

	while (s[i])
		i++;
	return (i);
}
