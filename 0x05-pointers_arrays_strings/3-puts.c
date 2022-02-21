#include "main.h"

/**
 * _puts - prints a string // method char by char
 * @str: strin[0] as memory
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
