#include <stdio.h>
#include "main.h"

/**
 * main - multiples of 3, 5 y 15
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i < 100)
		{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", "FizzBuzz");
		else if (i % 5 == 0)
			printf("%s ", "Buzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else
			printf("%d ", i);
		}
		else
			printf("%s\n", "Buzz");
	}

	return (0);
}
