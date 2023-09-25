#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: constant byte
 *@n: bytes of the memory
 *Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
		s[i] = b;
	for (unsigned int i = 0; i < n ; i++)
		printf("%c", s[i]);
	printf("\n");
}
