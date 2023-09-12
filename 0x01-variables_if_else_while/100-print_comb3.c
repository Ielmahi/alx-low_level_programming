#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0, d;

	while (i <= 9)
	{
		d = 0;
		while (d <= 9)
		{
			if (i != d && i < d)
			{
				putchar(i + 48);
				putchar(d + 48);

				if (i + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		i++;
	}
	putchar('\n');
	return (0);

}
