#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication
 * @argc: int of the number of arg
 * @argv: string of the arguments names
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
