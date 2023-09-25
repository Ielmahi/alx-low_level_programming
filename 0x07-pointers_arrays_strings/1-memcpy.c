#include "main.h"
/**
  * _memcpy - copy memory area .
  * @dest: dest memory area .
  * @src: source memory area .
  * @n: bytes from memory area to copy
  *
  * Return: the pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
