#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	if (!dest || !src)
		return (0);

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (start);
}
