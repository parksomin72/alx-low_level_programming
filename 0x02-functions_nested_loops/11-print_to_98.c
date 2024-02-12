#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n:
 */
void print_to_98(int n)
{
	int s;
	int e;

        if (n <= 98)
	{
	for (s = n; s <= 98; s++)
        {
		if (s != 98)
		{
		printf("%d, ", s);
		}
		else if (s == 98)
		{
			printf("%d", s);
		}
        }
	}
	else if (n >= 98)
	{
	for (e = n; e >= 98; e--)
        {
		if (e != 98)
		{
		printf("%d, ", e);
		}
		if (e ==98)
		{
			printf("%d", e);
        }
	}
	}
	printf("\n");
}
