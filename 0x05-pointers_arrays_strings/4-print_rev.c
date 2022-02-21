#include "main.h"

/**
 * print_rev - prints reverse of a string
 * @s: the string as pointer
 * Return: void
 */

void print_rev(char *s)
{
	int b = 0;
	int i;

	while (s[b] != '\0')
		b++;


	for (i = b - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
