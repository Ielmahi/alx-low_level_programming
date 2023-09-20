#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @z: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *z)
{
	int a = 0, i;
	char lett[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (z[a] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (z[a] == lett[i])
			{
				z[a] = rot13[i];
				break;
			}
		}
		a++;
	}

	return (z);
}
