#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - enrty point
 *
 * Description: print the value of n status:
 *		greater than, is zero and is not less than 6.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);

	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
	}
	putchar('\n');
	return (0);
}
