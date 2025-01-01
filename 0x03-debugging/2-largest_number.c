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

	if ((((a > b || a == b) && (b > c || a == c))
				|| (b <= 0 && c <= 0 && a > 0)))
	{
		largest = a;
	}
    else if ((b > a && a > c) || (a <= 0 && c <= 0 && b > 0))
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
