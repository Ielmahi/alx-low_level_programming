#include "main.h"
#include <stdlib.h>
/**
 * array_range - get len, malloc * len
 * loop size of len to insert min++ into new arr
 * @min: min input
 * @max: max input
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
			return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);

}
