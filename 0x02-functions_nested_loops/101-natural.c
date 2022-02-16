#include <stdio.h>

/**
 * main - sum of multiples of 3 and 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int n = 1024;
	int sumaj = 0;
	int sumak = 0;

	for (i = 1; i <= n; i++)
	{
		j = 3 * i;
		k = 5 * i;
		if (j < n)
		{
			sumaj = sumaj + j;
		}
		if (k < n)
		{
			sumak = sumak + k;
		}
	}
	printf("%d\n", sumaj + sumak);

	return (0);
}
