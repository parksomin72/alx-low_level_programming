#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * @c : character that checks
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (0);
	return(1);
}
