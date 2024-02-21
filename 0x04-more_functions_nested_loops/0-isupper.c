#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase character.
 * @c: the characters that checks.
 * Return: 1 if characters is uppercase,0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
