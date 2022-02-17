#include "main.h"

/**
 * _isdigit - check for digits. Use int for use ascii
 * @c: input
 * Return: 1 is digit, 0 no.
 */

int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	else
		return (0);
}
