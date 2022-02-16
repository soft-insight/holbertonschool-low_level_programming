#include <stdio.h>

/**
 * main - sum of multiples of 3 and 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;
	int n = 1024;
	int sumaj = 0;
	int sumak = 0;
	int sumal = 0;

	for (i = 1; i < n; i++)
	{
		j = 3 * i;
		k = 5 * i;
		l = 15 * i;
		if (j < n )
			sumaj = sumaj + j;
		if (k < n)
			sumak = sumak + k;
		if (l < n)
			sumal = sumal + l;
	}
	printf("%d\n", sumaj + sumak - sumal);

	return (0);
}
