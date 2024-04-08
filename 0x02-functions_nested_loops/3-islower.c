#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 *
 * Return: 1 if character is lowercase,  0 otherwise.
 */
int _islower(int c)
{
	int chara = 97;

	if (chara >= 97 || chara <= 122)
		return (1);
	else
		return (0);
	return (c);
}
