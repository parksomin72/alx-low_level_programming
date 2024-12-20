#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	if (!s || !accept)
		return (NULL);

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				i++;
			accept++;
		}
		s++;
	}
	return (i);
}
