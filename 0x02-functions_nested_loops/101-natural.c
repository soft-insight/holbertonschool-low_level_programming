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
	int sj[n];
	int sk[n];
	int sumaj = 0;
	int sumak = 0;

	for (i = 1; i <= n; i++)
	{
		j = 3 * i;
		k = 5 * i;
		if (j < n)
		{
			sj[i] = j;
			sumaj = sumaj + sj[i];
		}
		if (k < n)
		{
			sk[i] = k;
			sumak = sumak + sk[i];
		}
	}
	printf("%d\n", sumaj + sumak);

	return (0);
}
