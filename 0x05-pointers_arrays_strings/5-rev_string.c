#include <stdio.h>
/**
 *  _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 *  rev_string - function that reverses a string.
 * @s: string
 * return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int len = _strlen(s);
	char tmp;


	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
		i++;
	}

}
