#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';
	char uppalphabet = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet++);
	}
	
	while (uppalphabet <= 'Z')
	{
		putchar(uppalphabet++);
	}
	putchar('\n');
	return (0);
}
