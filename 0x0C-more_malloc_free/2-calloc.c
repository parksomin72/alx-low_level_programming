#include "main.h"
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        void **array;

	if(!nmemb || !size)
		return (NULL);
	
	array = calloc(nmemb, size);
	if (array == NULL)
		return (NULL);
	return (array);
}
