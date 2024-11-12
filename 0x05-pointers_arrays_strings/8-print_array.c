#include "main.h"
#include <stdio.h>

void print_number(int *a)
{
	/*int len, arr[10];

	len = 0;*/

	if (*a >= 10 && *a < 100)
	{
		putchar((*a / 10) + 48);
		putchar((*a % 10) + 48);
	}
	

	/*while (len > 0)
	{
		putchar(arr[len] + 48);
		len--;
	}*/
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
		print_number(&a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}
