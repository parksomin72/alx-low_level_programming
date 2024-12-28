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
        int *new_array, y;

        if(min > max)
                return (NULL);
        new_array = (int *)malloc((max - min + 1) * sizeof(int));

        if (new_array == NULL)
                return (NULL);

	y = 0;
        while (min <= max)
                new_array[y++] = min++;

        return (new_array);
}
