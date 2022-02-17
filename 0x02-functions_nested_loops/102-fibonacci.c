#include <stdio.h>

/**
 * main - prints 50 fibancci
 *
 * Return: 0 exit
 */

int main(void)
{
	int i;
	long int n[50];

	n[1] = 1;
	n[2] = 2;

	for (i = 3; i < 51; i++)
	{
		n[i] = n[i - 1] + n[i - 2];
	}

	for (i = 1; i < 51; i++)
	{
		if (i < 50)
		printf("%ld ,", n[i]);
		else
			printf("%ld\n", n[i]);
	}
	printf("\n");
	return (0);

}
