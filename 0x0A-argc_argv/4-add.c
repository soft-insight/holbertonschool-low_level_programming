#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the add of n numbers
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
		if (!isdigit(*argv[i]) && atoi(argv[i]) <= 0 && *argv[i] != 48 )
		/* if (atoi(argv[i]) <= 0 && *argv[i] != 48)*/
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
