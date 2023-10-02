#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
