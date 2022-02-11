#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Size of data types
 * print size of types
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of n is %d and is greater than 5\n", m);
	else if (m == 0)
		printf("Last digit of n is %d and is zero\n", m);
	else
		printf("Last digit of n is %d and is less than 6 and not 0\n", m);

	return (0);
}
