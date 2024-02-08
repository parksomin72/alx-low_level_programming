#include <stdio.h>
/**
 * main - Entry point
 * prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always Success 0
 */
int main(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		printf("%d", numbers);
		numbers++;
	}
	printf("\n");
	return (0);
}
