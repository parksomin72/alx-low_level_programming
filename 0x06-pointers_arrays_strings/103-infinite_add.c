#include "main.h"
/**
 * len - Computes the length of a string.
 * @str: The string whose length is to be computed.
 *
 * Return: The length of the string `str`.
 */
int len(char *str)
{
	int len, i;

	for (i = 0, len = 0; str[i]; i++)
		len++;
	return (len);
}

/**
 * size - Determines the maximum length of two strings.
 * @n1: The first string.
 * @n2: The second string.
 *
 * Return: The length of the longer string between `n1` and `n2`.
 */
int size(char *n1, char *n2)
{
	int len_n1, len_n2;

	len_n1 = len(n1);
	len_n2 = len(n2);
	if (len_n1 > len_n2)
		return (len_n1);
	else
		return (len_n2);
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
	int max_size, carry, sum, i, j;

	max_size = size(n1, n2);

	if (size_r <= max_size + 1)
		return (0);

	i = len(n1) - 1;
	j = len(n2) - 1;
	carry = 0;
	r[max_size + 1] = '\0';

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - 48;
		if (j >= 0)
			sum += n2[j--] - 48;
		carry = sum / 10;
		r[max_size--] = (sum % 10) + 48;

		if (max_size < 0 && (i >= 0 || j >= 0 || carry > 0))
			return (0);
	}

	if (max_size >= 0)
	{
		for (i = 0; r[max_size + 1 - i]; i++)
			r[i] = r[max_size + 1 - i];
		r[i] = '\0';
	}

	return (r);
}
