#include "main.h"
/**
 * len - Computes the length of a string.
 * @str: The string whose length is to be computed.
 *
 * Return: The length of the string `str`.
 */
int len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * size - Determines the maximum length of two strings.
 * @n1: The first string.
 * @n2: The second string.
 *
 * Return: The length of the longer string between `n1` and `n2`.
 */
int max_size(char *s1, char *s2)
{
	int len1, len2;

	len1 = len(s1);
	len2 = len(s2);

	if (len1 > len2)
		return (len1);
	else
		return (len2);
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, sum, carry;

	k = max_size(n1, n2);

	if (size_r <= k + 1)
		return (0);

	i = len(n1) - 1;
	j = len(n2) - 1;
	carry = 0;
	r[k + 1] = '\0';

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
		       sum += n1[i--] - 48;
		if (j >= 0)
			sum += n2[j--] - 48;
		carry = sum / 10;
		r[k--] = (sum % 10) + 48;

		if (k < 0 && (i >= 0 || j >= 0 || carry > 0))
			return (0);
	}

	return (r + k + 1);
}
