#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, start = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= - 1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - 48);
			start = 1;
		}
		else if (start)
			break;
		i++;
	}
	return (result * sign);
}
