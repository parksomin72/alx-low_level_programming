#include <stdio.h>
#include "main.h"
/**
 * is_digit - Checks if a string represents a valid integer.
 * @s: The string to check.
 *
 * Return: 1 if the string is a valid integer, 0 otherwise.
 */
int is_digit(char *s)
{
	if (*s == '-')
		s++;
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int digit = 1;
	int i = 1;

	while (i < argc)
	{
		if (!is_digit(argv[i]))
		{
			digit = 0;
			break;
		}
		i++;
	}

	if (digit)
	{

		int result, sum, sign;
		char *arg;

		sum = 0;
		sign = 1;
		i = 1;
		while (i < argc)
		{
			result = 0;
			arg = argv[i];
			if (*arg == '-')
			{
				sign *= -1;
				arg++;
			}
			while (*arg)
			{
				if (*arg >= '0' && *arg <= '9')
					result = result * 10 + (*arg - '0');
				arg++;
			}
			sum = sum + (result * sign);
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
