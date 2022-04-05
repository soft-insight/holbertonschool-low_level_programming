#include "main.h"

/**
 * set_bit - set the bit at given index.
 * @n: the decimal number
 * @index: the index in the binary representation
 *
 * Return: the bit in the position.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number;

	if (index > 64)
		return (-1);

	number = 0;

	while (number <= index)
	{
		*n = (*n | 1 << index);
		number++;
	}
	return (1);
}
