#include "stdio.h"
#include "main.h"

/**
 * print_to_98 - print from n to 98
 * @n: the number to start
 * Return: void
 */

void print_to_98(int n)
{

	int j;

	if (n < 98)
	{
		for (j = n; j <= 98; j++)
		{
			if (j == 98)
				printf("%d", j);
			else
				printf("%d, ", j);

		}
		putchar('\n');
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			if (j == 98)
				printf("%d", j);
			else
				printf("%d, ", j);
		}
		putchar('\n');
	}
}
