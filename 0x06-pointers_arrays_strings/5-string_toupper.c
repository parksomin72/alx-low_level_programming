#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i])
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 32;
		i++;
	}
	return (n);
}
