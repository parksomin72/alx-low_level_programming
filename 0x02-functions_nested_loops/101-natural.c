#include <stdio.h>
/**
 * sumMultiplesOf3Or5 - Lists all the natural numbers below 1024 (excluded),
 *        that are multiples of 3 or 5.
 * @n: is the number to be checked
 *
 * Return: Always 0.
 */
int sumMultiplesOf3Or5(int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return (sum);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 1024;
	int result = sumMultiplesOf3Or5(n);

	printf("%d\n", result);
	return (0);
}
