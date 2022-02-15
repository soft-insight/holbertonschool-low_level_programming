#include "main.h"
#include <stdio.h>
/**
 * times_table - la tabla del nueve
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i != 9)
			{
				k = i * j;
				if (k / 10 == 0)
				{
					_putchar(k % 10 + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				k = i * j;
				if (k / 10 == 0)
					_putchar(k % 10 + '0');
				else
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}
