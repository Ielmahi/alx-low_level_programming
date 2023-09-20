#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1;

	while (start < end)
	{
		n = a[start];
		a[start] = a[end];
		a[end] = n;
		start++;
		end--;
	}
}
