#include "main.h"
/**
 * _isalph- function that checks for lowercase character.
 * @c: character
 * Return: 1 if chracters is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
