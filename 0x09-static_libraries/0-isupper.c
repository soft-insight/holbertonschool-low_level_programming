#include "main.h"

/**
 * _isupper - checks uppercase char
 * remember the input is integer and can be
 * used to obtain data from the ascii table.
 * @c: input
 * Return: 1 upper 0 no
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
