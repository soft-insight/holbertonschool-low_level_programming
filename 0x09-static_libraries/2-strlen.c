# include "main.h"

/**
 * _strlen - length of a string
 * @s: pointer to str
 * Return: b the length
 */

int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
		b++;

	return (b);
}
