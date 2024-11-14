#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	char *start;

	start = n;
	while (*n)
	{
		if (*n >= 'a' && *n <= 'z')
			*n -= 32;
		n++;
	}
	return (start);
}
