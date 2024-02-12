#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n:
 */
void print_to_98(int n)
{

        for (n = 0; n <= 98; n++)
        {
		printf("%d", n);
        }
	for (; n >= 98; n--)
        {
		printf("%d", n);
        }
	printf("\n");
}
