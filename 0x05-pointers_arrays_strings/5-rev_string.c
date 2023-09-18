#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char c;

	while (s[l])
		l++;

	while (i < l / 2)
	{
		c = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - 1] = c;
	}
}
