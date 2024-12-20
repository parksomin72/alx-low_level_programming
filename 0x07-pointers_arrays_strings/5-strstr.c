#include "main.h"
/**
 * _strstr - Locates the first occurrence of the substring `needle`
 *           in the string `haystack`.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_h, *start_n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		start_h = haystack;
		start_n = needle;

		while (*start_n && *start_h == *start_n)
		{
			start_h++;
			start_n++;
		}

		if (*start_n == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
