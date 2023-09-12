#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *		the alphabet a - z
 */

void print_alphabet(void)
{
	int st;

	for (st = 'a'; st <= 'z'; st++)
		_putchar(st);
	_putchar('\n');
}
