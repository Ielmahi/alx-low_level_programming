#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14; 10 times.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, c;
	int j = 1;
	
	while (j <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			c = i;
			if (i > 9)
			{
				_putchar(i + 48);
				c = i % 10;
			}
			_putchar(c + 48);
		}
		_putchar('\n');
		j++;
	}
}
