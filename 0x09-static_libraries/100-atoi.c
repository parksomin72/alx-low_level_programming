#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int result, sign;

	while (*s == ' ' || *s == '\t' || *s == '\v' || *s == '\f'
			|| *s == '\r' || *s == '\n')
		s++;

	sign = 1;
	result = 0;
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - 48);
		s++;
	}
	return (result * sign);
}
