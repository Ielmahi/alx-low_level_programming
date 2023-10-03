#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @c: array of chars
 * @size: the size of the memory to print
 *
 * Return: address of the memory to print
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return NULL;
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return NULL;
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
