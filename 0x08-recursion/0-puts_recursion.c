#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line, recursively.
 * @s: The string to be printed.
 *
 * This function prints each character of the given string @s recursively,
 * until it reaches the null terminator, at which point it prints a new line.
 *
 * Return: void.
 */


void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
