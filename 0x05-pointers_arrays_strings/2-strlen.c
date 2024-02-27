#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string.
 */
int _strlen(char *s)
{
        char *string = s;

	while (*string != '\0')
	{
		string++;
	}
        return (string - s);
}
