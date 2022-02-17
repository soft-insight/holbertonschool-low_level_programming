#include "main.h"

/**
 * more_numbers - prints ten times 0-14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10  + '0');
			else
			{
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
