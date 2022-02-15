#include "main.h"

/**
 * _abs - calculates the |x|
 * @x: x is in Z
 * Return: x if x >=0 and -x if x<0
 */

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
