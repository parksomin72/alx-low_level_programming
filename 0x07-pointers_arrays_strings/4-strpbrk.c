#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if (!s || !accept)
		return (NULL);

	while (*s)
	{
		temp = accept;
		while (*temp)
		{
			if (*temp == *s)
				return (s);
			temp++;
		}

		s++;
	}
	return (NULL);
}
