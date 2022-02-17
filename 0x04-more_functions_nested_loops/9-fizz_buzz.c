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
	char name1[] = "Fizz";
	char name2[] = "Buzz";
	char name3[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%s ", name1);
		else if (i % 5 == 0)
			printf("%s ", name2);
		else if (i % 15 == 0)
			printf("%s ", name3);
		else
			printf("%d ", i);
	}
	putchar('\n');

	return (0);
}
