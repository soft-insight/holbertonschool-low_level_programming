#include <stdio.h>

/**
 * main - prints the name of all args
 * @argc: int of the number of arg
 * @argv: string of the arguments names
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
