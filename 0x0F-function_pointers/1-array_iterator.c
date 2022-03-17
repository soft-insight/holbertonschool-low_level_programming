#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates the array on action()
 * @array: the array
 * @size: the size
 * @action: the function where to iterete
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

