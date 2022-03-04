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
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
