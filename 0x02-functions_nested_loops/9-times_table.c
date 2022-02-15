#include "main.h"
#include <stdio.h>

/**
 * times_table - la tabla del nueve
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			_putchar(m/10 + '0');
			_putchar(m%10 + '0');
			_putchar('\n');
		}
	}
}
