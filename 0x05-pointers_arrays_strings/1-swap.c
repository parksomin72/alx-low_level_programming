#include "main.h"
/**
 *  swap_int - function that swaps the values of two integers.
 *  @a: takes an int as first parameter.
 *  @b: takes an int as second parameter.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
