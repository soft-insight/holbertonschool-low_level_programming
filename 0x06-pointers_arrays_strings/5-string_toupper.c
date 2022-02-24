#include "main.h"

/**
 * string_toupper - converts upper
 * @s: string to upper
 * Return: s
 */


char *string_toupper(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\n')
		i++;

	for (j = 0; j < i; j++)
	{
		if (96 < s[j] && s[j] < 123)
			s[j] = s[j] - 32;
	}
	return (s);
}
