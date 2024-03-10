#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 * Return: always 0 (Seccuss)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	return (0);
}
