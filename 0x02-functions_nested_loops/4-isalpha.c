#include "main.h"
/**
 * _isalpha - function that checks for lowercase or uppercase character.
 * @c: the character that checks.
 * Return: 1 if character is lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
