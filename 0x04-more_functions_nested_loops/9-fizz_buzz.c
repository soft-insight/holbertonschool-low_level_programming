#include <stdio.h>
#include "main.h"

int main(void)
{
	int i;
	int j;

	for (i = 1; i <= 100; i++)
	{
		j = 3 * i;

		if (j < 100)
			printf("%d ", j);

	}
	putchar('\n');

	return (0);
}
