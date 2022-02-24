#include "main.h"

/**
 * reverse_array - reversa un array
 * @a: the array
 * @n: the size
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - i - 1] = c;
	}
}
