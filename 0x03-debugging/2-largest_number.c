#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= 0 && b >= 0 && c >= 0)
	{
		if (a > b && b > c)
		{
			largest = a;
		}
		else if (b > a && a > c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	}
	else if (a < 0 && b >= 0 && c >= 0)
	{
		if (b > c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	}
	else if (b < 0 && a >= 0 && c >= 0)
	{
		if (a > c)
		{
			largest = a;
		}
		else
		{
			largest = c;
		}
	}
	else if (c < 0 && a >= 0 && b >= 0)
	{
		if (a > b)
		{
			largest = a;
		}
		else
		{
			largest = b;
		}
	}
	else if (a < 0 && b < 0 && c > 0)
	{
		largest = c;
	}
	else if (a < 0 && c < 0 && b > 0)
	{
		largest = b;
	}
	else if (c < 0 && b < 0 && a > 0)
	{
		largest = a;
	}
	if (a == b)
	{
		if (a == c)
		{
			largest = c;
		}
		else if (a > c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	}
	return (largest);
}
