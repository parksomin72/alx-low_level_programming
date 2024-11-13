#include "main.h"
#include <unistd.h>

/**
 * print_number - a function that prints the value of a specified element in an array
 * @a: array containing the numbers
 * @n: index of the element to print
 */
void print_number(int *a, int n)
{
	int j, arr[10];
	int num = a[n];

	if (a[n] < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (a[n] >= 0 && a[n] <= 9)
	{
		_putchar(num + 48);
	}
	else
	{
		j = 0;
		while (num > 0)
		{
			arr[j] = num % 10;
			num = num / 10;
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
