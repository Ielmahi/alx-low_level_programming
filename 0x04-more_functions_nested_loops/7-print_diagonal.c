#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 *
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('\\');
		_putchar('\n');
	}
}
