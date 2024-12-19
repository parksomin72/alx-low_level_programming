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
	char *start = dest;
	int i = 0;

	if (!dest || !src)
		return (NULL);

	while (*dest)
		dest++;

	while (i < n && *src)
	{
		*dest++ = *src++;
		i++;
	}
	while (i < n)
		*dest++ = '\0';
	return (start);
}
