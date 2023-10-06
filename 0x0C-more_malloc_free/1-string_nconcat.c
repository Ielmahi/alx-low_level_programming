#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *result;
	unsigned int i, j;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
	{
		len2 = strlen(s2);
		if (n >= len2)
			n = len2;
	}
	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}
