#include "main.h"
/**
 * leet - encode into 1337speak
 * @str: input value
 * Return: str value
 */
char *leet(char *str)
{
	char alpha[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (alpha[j])
		{
			if (str[i] == alpha[j])
			{
				str[i] = num[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
