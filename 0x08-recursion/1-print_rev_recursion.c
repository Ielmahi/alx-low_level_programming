#include "main.h"

/**
  * _print_rev_recursion - Prints a string, followed by a new line,in reverse order
  * @s : The string to be printed in reverse order
  *
  * This function prints each character of the given string @s recursively,in reverse order
  * until it reaches the null terminator, at which point it prints a new line.
  *
  * Return: void.
  */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');;
}
