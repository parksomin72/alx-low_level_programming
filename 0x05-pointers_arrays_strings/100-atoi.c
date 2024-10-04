#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 0, len = 0, result = 0, start = 0, digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && start == 0)
	{
		if (s[i] == '-')
			++sign;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
				digit = -digit;
			result = result * 10 + digit;
			start = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			start = 0;
		}
		i++;
	}
	if (start == 0)
		return (0);
	return (result);
}
