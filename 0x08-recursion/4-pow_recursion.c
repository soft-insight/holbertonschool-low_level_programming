#include "main.h"

/**
 * _pow_recursion - power
 * @x: base
 * @y: exponent
 * Return: k the power
 */

int _pow_recursion(int x, int y)
{
	int k;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	k = x * _pow_recursion(x, y - 1);
	return (k);
}
