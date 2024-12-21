#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *new_array;

	if (size == 0)
		return (0);

	new_array = (char *)malloc(size * sizeof(char));

	if (new_array == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	while (i < size)
	{
		new_array[i] = c;
		i++;
	}
	return (new_array);
}
