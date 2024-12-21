#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int sign, result;

	sign = 1;
	result = 0;
	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int num1, num2, result;

		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		result  = num1 * num2;
		printf("%d\n", result);
		return (0);
	}


	printf("Error\n");
	return (1);


}
