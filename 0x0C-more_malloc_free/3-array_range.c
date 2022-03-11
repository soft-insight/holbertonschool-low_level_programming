#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

int *array_range(int min, int max)
{
	int i;
	int *n;

	if (min > max)
		return (NULL);
	
	n = malloc((max - min + 1) * sizeof(int));
	if (n == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		n[i] = min + i;

	return (n);
}
