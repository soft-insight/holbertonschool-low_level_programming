#include <stdio.h>

/**
 * main - finds the largest prime
 * @p: input p
 * Return: 0
 */

long int prime(int p);

int main(void)
{
	long int n = 612852475143;
	long int i, j;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			j = prime(i);
	}
	printf("%ld\n", j);

	return (0);
}

/**
 * prime - finds if the number is prime
 * @p: input the number
 * Return: k the prime number
 */

long int prime(int p)
{
	int i, k, flag = 0;

	for (i = 2; i <= p / 2; ++i)
	{
		/*
		 * if p is divisible by i,
		 * then p is not prime
		 * change flag to 1 for non-prime number
		 */
		if (p % i == 0)
		{
			flag = 1;
			break;
		}
	}
	/* flag is 0 for prime numbers */
	if (flag == 0)
		k = p; /*printf("%d\n", p);*/

	return (k);
}
