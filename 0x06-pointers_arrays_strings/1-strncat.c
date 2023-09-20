#include "main.h"
/**
 * _strncat - Concatenates two strings up to 'n' characters
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to concatenate
 *
 * Return: Pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b] && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
