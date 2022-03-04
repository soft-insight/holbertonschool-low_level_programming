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
	int x, add = 0, d;
	char *num;

	for (x = 1; x < argc ; x++)
	{
		num = argv[x];
		for (d = 0; num[d]; d++)
		{
			if (isdigit(num[d]) == 0 && num[0] != '-')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[x]);
	}
	printf("%d\n", add);
	return (0);
}
