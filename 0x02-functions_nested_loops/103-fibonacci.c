#include <stdio.h>

/**
 * main - print the sum of par fibonacci numbers starting in 1
 *
 * Return: 0 exit
 */

int main(void)
{
	int i;
	int n[32];
	int sum = 0;

	n[1] = 1;
	n[2] = 2;

	for (i = 3; i <= 32; i++)
		n[i] = n[i - 1] + n[i - 2];
/*
 * for (i = 1; i <= k; i++)
 * printf ("[%d] = %d\n", i, n[i]);
*/

	for (i = 1; i <= 32; i++)
	{
		if (n[i] % 2 == 0)
		{
			sum = sum + n[i];
			/* printf("[%d] = %d, %d\n", i, n[i], sum);*/
		}
	}
	printf("%d\n", sum);

	return (0);
}
