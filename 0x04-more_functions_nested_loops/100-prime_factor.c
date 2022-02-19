#include <stdio.h>

/**
 * main - finds the largest prime
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i, k;

	k = n;
	for (i = 2; i < k ; i++)
	{
		if (n % i == 0)
		{
			k = n / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
