#include <stdio.h>

/**
 * main - print the sum of par fibonacci numbers starting in 1
 *
 * Return: 0 exit
 */

int main(void)
{
	int i, j;
	int n[32];
	int sum = 0;

	n[1] = 1;
	n[2] = 2;

	for (i = 3; i < 33; i++)
		n[i] = n[i - 1] + n[i - 2];

	for (i = 1; i < 33; i++)
	{
		j = 2 * i;
		if (j < 33)
		{
			sum = sum + n[j];
		}
	}
	printf("%d\n", sum);

	return (0);
}
