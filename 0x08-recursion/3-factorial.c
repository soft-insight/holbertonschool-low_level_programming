#include "main.h"

/**
 * factorial - factorial
 * @n: the number
 *
 * Return: the factorial
 */

int factorial(int n)
{
	int k;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	k = n * factorial(n - 1);
	return (k);
}
