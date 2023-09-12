#include "main.h"
/**
 * _abs - outputs absolut value of integer input
 * @n: integer to check
 *
 * Return: n
 */

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
