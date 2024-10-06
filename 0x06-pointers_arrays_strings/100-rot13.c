#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */
char *rot13(char *str)
{
	int i = 0, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		j= 0;

		while (j < 52)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
