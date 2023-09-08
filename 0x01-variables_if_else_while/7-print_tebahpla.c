#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char i;

	for(i = 'z';i >= 'a';i--)
	{
		putchar(i);
	}
	putchar('\n');
}
