#include "main.h"
/**
 * times_table - la tabla del nueve
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k == 0 && k < 10)
			{
				_putchar(' ');
				_putchar((k) + '0');
			}
			else if (i == 0 && j != 0)
			{
				_putchar(' ');
				_putchar((k) + '0');
			}
			else if (k < 10)
			{
				_putchar(' ');
				_putchar((k) + '0');
			}
			else
			{
				_putchar(((k) / 10) + '0');
				_putchar(((k) % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
