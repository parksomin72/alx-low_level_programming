#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @s: The string to calculate the length of.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (!s || *s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_pal_recursive - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @i: The current index.
 * @len: The total length of the string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_pal_recursive(char *s, int i, int len)
{
	if (i >= len / 2)
		return (1);
	else if (s[i] != s[len - 1 - i])
		return (0);
	return (is_pal_recursive(s, i + 1, len));
}

/**
 * is_palindrome - Determines if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len;
	if (!s || *s == '\0')
		return (1);

	len = _strlen_recursion(s);
	return (is_pal_recursive(s, 0, len));
}
