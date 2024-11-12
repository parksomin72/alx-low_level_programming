#include "main.h"
#include <unistd.h>

void print_number(int *a, int n)
{
	int j, arr[10];


	if (a[n] < 0)
		a[n] = -a[n];
	if (a[n] >= 0 && a[n] <= 9)
	{
		write(1, &a[n], 1);
	}
	else
	{
		j = 0;
		while (a[n] > 0)
		{
			arr[j] = a[n] % 10;
			a[n] = a[n] / 10;
			j++;
		}
	}

	while (j > 0)
	{
		_putchar(arr[j - 1] + 48);
		j--;
	}
}
/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (a[i] < 0)
			_putchar('-');
		print_number(a, i);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}
