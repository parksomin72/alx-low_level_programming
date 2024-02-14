#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @n: the integer that check.
 * Return: 0 Always (Success).
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
