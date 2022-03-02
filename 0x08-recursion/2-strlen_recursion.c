#include "main.h"

/**
 * _strlen_recursion - lenght of a string
 * @s: string
 *
 * Return: i, the len
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != 0)
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
