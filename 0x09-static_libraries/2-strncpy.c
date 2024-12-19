#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int i = 0;

	if (!src || !dest)
		return (NULL);

	while (i < n && *src)
	{
		*dest++ = *src++;
		i++;
	}
	
	while (i < n)
	{
		*dest++ = '\0';
		i++;
	}

	return (start);
}
