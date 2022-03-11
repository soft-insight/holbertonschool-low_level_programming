#include "main.h"
#include <stdlib.h>

/**
 * _calloc - mem alloc for n elements of size "size"
 * @nmemb: number of elements
 * @size: size of the elements
 *
 * Return: s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;

	return (s);
}
