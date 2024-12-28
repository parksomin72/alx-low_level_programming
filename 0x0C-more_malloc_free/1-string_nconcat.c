#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: Input string
 *
 * Return: Length of the string, or 0 if s is NULL
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (!s)
		return (0);
	while (*s++)
		len++;
	return (len);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *result;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;


	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);


	for (i = 0; i < len1; i++)
		result[i] = s1[i];


	for (j = 0; j < n; j++)
		result[i + j] = s2[j];


	result[i + j] = '\0';

	return (result);
}

