#include "main.h"

/**
 * _memset - constant byte b to first n positions
 * @s: string array
 * @b: constant
 * @n: n bytes
 * Return: string with n bytes of b
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned int j;

	while (i != '\0')
		i++;
	for (j = 0; j < n; j++)
		s[j] = b;

	return (s);
}
