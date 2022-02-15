#include "main.h"

/**
 * print_alphabet_x10 - with _putchar
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}

}
