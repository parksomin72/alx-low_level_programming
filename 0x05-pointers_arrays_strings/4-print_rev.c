#include "main.h"
/**
 *  _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int start;

	start = 0;
	while (s[start])
		start++;
	return (start);
}

/**
 *  print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s) - 1;
	while (len > 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
