#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s || !*s)
		return (0);

	while (s[i])
		i++;
	return (i);
}
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *str_dup, *s;
	int len = _strlen(str) + 1;

	str_dup = (char *)malloc(len * sizeof(char));

	if (str_dup == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	s = str_dup;
	while (*str)
		*str_dup++ = *str++;
	return (s);
}
