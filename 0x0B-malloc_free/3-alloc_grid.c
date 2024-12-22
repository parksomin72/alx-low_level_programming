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
	int **new_array = (void *)malloc(width * sizeof(int *));

	if (new_array == NULL)
		return (0);
	for (i = 0; i < width; i++)
		new_array[i] = (int *)malloc(height * sizeof(int));
	for (i = 0; i < width; i++)
	{
		if (new_array[i] == NULL)
			return (0);
	}

	for (i = 0; i < width; i++)
	{
		for (y = 0; y < height; y++)
			new_array[i][y] = 0;
	}
	return (new_array);
}
