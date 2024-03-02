#include "main.h"
#include<stdio.h>
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int rev_str = 0;
	int i;

	while (*s != '\0')
	{
		rev_str++;
		s++;
	}
	s--;

	for (i = rev_str; i > 0; i--)
	{
		printf("%c", *s);
		s[1];
	}
}
