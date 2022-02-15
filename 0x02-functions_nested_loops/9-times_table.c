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
			if (j != 9)
			{
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
				if (k / 10 == 0)
				{
					_putchar(k % 10 + '0');
				}
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
