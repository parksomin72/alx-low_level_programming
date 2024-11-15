#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";


	int size = strlen(n);
	char *m = rev_string(n, size);

	printf("%s\n", n);
	printf("%s\n", m);

	return (0);
}
