#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int i, a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (a = i; a < size; a++)
			{
				_putchar(' ');
			}
			for (a = 1; a <= i; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
