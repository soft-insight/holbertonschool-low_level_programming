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
		for (i = '0'; i <= '9'; i++)
			_putchar(i);
		for (i = '0'; i <= '4'; i++)
		{
			_putchar('1');
			_putchar(i);
		}
		_putchar('\n');
	}
}