#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min num.
 * @max: max num.
 * Return: pointer to new array.
 */

int	*array_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
