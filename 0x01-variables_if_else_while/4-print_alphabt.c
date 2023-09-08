#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int chr = 'a';

	while (chr <= 'z')
	{
		if (chr == 'e' || chr == 'q')
			chr++;
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
