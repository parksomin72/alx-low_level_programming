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

	while (*s)
	{
		temp = accept;
		while (*temp)
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		s++;
	}
	return (0);
}
