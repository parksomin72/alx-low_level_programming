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
	int sign, result, is_digit, digit;

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
			digit = *s - 48;
			if (result > (2147483648 - digit ) / 10 && sign == '-')
				return (-2147483648);
			result = result * 10 + digit;
			s++;
		}

	}

	return (sign * result);
}
