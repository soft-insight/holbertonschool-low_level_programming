#include "main.h"

/**
 *  jack_bauer - _putchar 24 hours min by min
 *
 *  Return: void
 */

void jack_bauer(void)
{
	int k;
	int m;
	int i;
	int j;

	for (k = '0'; k <= '2'; k++)
	{
		if (k == '2')
		{
			for (m = '0'; m <= '3'; m++)
			{
				for (j = '0'; j <= '5'; j++)
				{
					for (i = '0'; i <= '9'; i++)
					{
						_putchar(k);
						_putchar(m);
						_putchar(':');
						_putchar(j);
						_putchar(i);
						_putchar('\n');
					}

				}
			}
		}
		else
		{
			for (m = '0'; m <= '9'; m++)
			{
				for (j = '0'; j <= '5'; j++)
				{
					for (i = '0'; i <= '9'; i++)
					{
						_putchar(k);
						_putchar(m);
						_putchar(':');
						_putchar(j);
						_putchar(i);
						_putchar('\n');
					}

				}
			}

		}
	}
}
