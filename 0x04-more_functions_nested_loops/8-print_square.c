#include "main.h"
/**
 * print_square - Prints a squareusing the character #.
 *
 * @size: The size of the square.
 */
void print_square(int size)
{
	int lenght, width;

	for (lenght = 1; lenght <= size; lenght++)
	{
		for (width = 1; width <= size; width++)
			_putchar('#');
		_putchar('\n');
	}
}
