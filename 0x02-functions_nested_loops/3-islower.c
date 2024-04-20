#include "main.h"
/**
 * _islower -  checks for lowercase character.
 * @c: the character that checks.
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c <= 65 || c >= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
