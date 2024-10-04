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
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (j < n && src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	while (i < n && dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
