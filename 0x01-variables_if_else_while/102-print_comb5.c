#include <stdio.h>
/**
 * main - Entry Point
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int i = 0, d;

	while (i <= 99)
	{
		d = i;
		while (d <= 99)
		{
			if (d != i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);

				if (i != 98 || d != 99)
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
