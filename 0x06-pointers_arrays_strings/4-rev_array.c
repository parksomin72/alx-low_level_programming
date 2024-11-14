#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n / 2)
	{
		int temp;

		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
