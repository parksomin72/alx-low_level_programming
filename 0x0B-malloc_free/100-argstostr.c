#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	for (; *s; s++)
		len++;
	return (len);
}
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *new_string, *start;
	int i, y, Total_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	Total_len = 0;
	for (i = 0; i < ac; i++)
	{
		Total_len += _strlen(av[i]) + 1;
	}
	new_string = (void *)malloc((Total_len + 1) * sizeof(char *));
	if (new_string == NULL)
		return (NULL);

	start = new_string;
	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y]; y++)
		{
			*new_string = av[i][y];
			new_string++;
		}
		*new_string++ = '\n';
	}
	*new_string = '\0';

	return (start);
}
