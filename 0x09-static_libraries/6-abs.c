#include "main.h"
/**
 * _abs - outputs absolut value of integer input
 * @i: integer to check
 *
 * Return: i
 */

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
