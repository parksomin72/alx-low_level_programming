#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: the character that checks.
 * Return: 1 if character is digit. 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
