#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *temp;

	if (!s || !accept)
		return (0);

	while (*s)
	{
		temp = accept;
		while (*temp)
		{
			if (*s == *temp)
			{
				break;
			}
			temp++;
		}
		if (!*temp)
			break;
		i++;
		s++;
	}
	return (i);
}
