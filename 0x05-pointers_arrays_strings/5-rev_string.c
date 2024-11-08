#include <stdio.h>
/**
 *  _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 *  rev_string - function that reverses a string.
 * @s: string
 * return: 0
 */
void rev_string(char *s)
{
	int len, i;

	len = _strlen(s) - 1;
	i = 0;

	while (i < len / 2)
	{
		int temp;

		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
		i++;
	}
}
