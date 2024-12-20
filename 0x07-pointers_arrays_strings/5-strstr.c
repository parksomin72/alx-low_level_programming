#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
        char *temp;
	int is_found = 0;

        if (*needle == '\0')
                return (0);

        while (*haystack)
        {
                temp = needle;
                while(*temp)
                {
                        if (*haystack != *temp)
                                break;
			else
				is_found++;
                        temp++;
                }
                haystack++;
        }
	if (is_found)
		return (needle);
	else
		return (0);
}
