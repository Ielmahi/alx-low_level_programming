#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: string of chars
 * @s2: string of chars
 *
 * Return: address of the newly allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;
	char *result;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}
