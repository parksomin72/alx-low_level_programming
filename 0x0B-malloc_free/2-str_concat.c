#include "main.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string, *s;
	int len_s1 = _strlen(s1);
	int len_s2 = _strlen(s2);
	int total_len = len_s1 + len_s2 + 1;

	new_string = (char *)malloc(total_len * sizeof(char));

	if (!new_string)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}


	s = new_string;

	while (*s1 && s1)
		*new_string++ = *s1++;
	while (*s2 && s2)
		*new_string++ = *s2++;

	*new_string = '\0';
	return (s);
}
