#include "main.h"
/**
 * leet - encodes a string into 1337
 * @c: input string.
 * Return: the pointer to dest.
 */
char *leet(char *c)
{
	int i;
	int j;

	char chars[] = "aAeEoOtTlL";
	char rps[] = "4433007711";

	i = 0;
	while (c[i])
	{
		j = 0;
		while (rps[j])
		{
			if (c[i] == chars[j])
				c[i] = rps[j];
			j++;
		}
		i++;
	}
	return (c);
}
