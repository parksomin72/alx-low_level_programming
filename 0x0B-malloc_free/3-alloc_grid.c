#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int i, y;
	int **new_array;

	if (width <= 0 || height <= 0)
		return (0);
	new_array = (void *)malloc(height * sizeof(int *));
	if (new_array == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		new_array[i] = (int *)malloc(width * sizeof(int));
		if (new_array[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(new_array[i]);
			free(new_array);
			return (0);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
			new_array[i][y] = 0;
	}
	return (new_array);
}
