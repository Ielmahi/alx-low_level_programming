#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 *
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}

		_putchar(92);
		_putchar('\n');
		i++;
	}
	if (i <= 0)
		_putchar('\n');

}
