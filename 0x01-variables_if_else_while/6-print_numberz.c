#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
