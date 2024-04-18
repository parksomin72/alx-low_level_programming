#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @n: the integer value.
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
		return (n);

	return (0);
}
