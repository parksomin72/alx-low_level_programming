#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp_n, *temp_h;

	if (!needle)
		return (haystack);
	for (; *haystack; haystack++)
	{
		temp_h = haystack;
		temp_n = needle;
		while (*temp_n && *temp_n == *temp_h)
		{
			temp_h++;
			temp_n++;
		}
		if (!*temp_n)
			return (haystack);
	}
	return (0);
}
