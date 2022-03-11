#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check for malloc
 * @b: the size to alloc
 *
 * Return: s as succes or 98 as error
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
