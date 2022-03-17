#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - returns the index of success when comparing
 * @array: the array
 * @size: the size of array
 * @cmp: the funct to compare that returns 0 when not success
 *
 * Return: the index i of succees or -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}


