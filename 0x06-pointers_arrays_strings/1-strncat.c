#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *start;

	start = dest;
	while (*dest)
		dest++;
	i = 0;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (*dest && i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (start);
}
