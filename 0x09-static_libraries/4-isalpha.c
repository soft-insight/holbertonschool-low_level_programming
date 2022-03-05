#include "main.h"

/**
 * _isalpha - returns 1 if is alpha 0 if not
 * @c: input a char
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 98 && c < 123))
		return (1);
	else
		return (0);
}
