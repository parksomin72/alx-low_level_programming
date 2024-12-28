#include "main.h"
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
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, Total_len;
	unsigned int i, y;
	char *new_string;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	Total_len = len1 + len2 + 1;

	new_string = (char *)malloc(Total_len * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; *s1; i++)
		new_string[i] = *s1++;
	for (y = 0; *s2 && y < n; y++)
		new_string[i++] = *s2++;
	new_string[i] = '\0';

	return (new_string);
}
