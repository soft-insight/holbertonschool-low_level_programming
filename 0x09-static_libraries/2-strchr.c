#include "main.h"

/**
 * _strchr - locate a char in a string
 * @s: the string
 * @c: the char to locate
 * Return: the string from c
 */

char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s = s + j;
			return (s);
		}
	}
	return ('\0');
}
