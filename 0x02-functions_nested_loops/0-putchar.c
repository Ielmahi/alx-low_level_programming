#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putcahr using putcahr prototype
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int st;

	for (st = 0; st < 8; st++)
		_putchar(str[st]);
	_putchar('\n');

	return (0);
}
