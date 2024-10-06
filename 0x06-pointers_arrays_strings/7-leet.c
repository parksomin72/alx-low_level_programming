#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *str)
{
	int i = 0, j;
	char s1[] = "aAeEoOtTlL", s2[] = "4433007711";

	while (str[i])
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
			j++;
		}
		i++;
	}
	return (str);
}
