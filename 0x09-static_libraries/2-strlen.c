#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	if (!S || *s == '\0')
		return (0);
	int i = 0;
	while (s[i])
		i++;
	return (i);
}
