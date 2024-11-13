#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int sign, result, is_digit;

	sign = 1;
	result = 0;
	is_digit = 0;

	while (*s)
	{
		if (*s == '+' || *s == '-')
		{
			if (*s == '-')
				sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			is_digit = 1;
			break;
		}

		s++;
	}

	if (is_digit)
	{
		while (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - 48);
			s++;
		}
	}

	return (sign * result);
}
