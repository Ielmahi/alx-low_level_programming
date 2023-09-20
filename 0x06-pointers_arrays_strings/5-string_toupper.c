#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @j: The string will be modified
  *
  * Return: char var
  */
char *string_toupper(char *j)
{
	int i = 0;

	while (j[i])
	{
		if (j[i] >= 'a' && j[i] <= 'z')
			j[i] -= 32;
		i++;
	}
	return (j);
}
