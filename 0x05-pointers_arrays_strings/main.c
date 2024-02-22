#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 2;
    printf("n=%d\n", n);
    reset_to_98(&n);
    return (0);
}
