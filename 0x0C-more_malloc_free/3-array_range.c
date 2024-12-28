#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *new_array;

	if(min > max)
		return (NULL);

	
	new_array = malloc((max - min) * sizeof(int));

	if (new_array == NULL)
		return (NULL);
	return (new_array);
}
