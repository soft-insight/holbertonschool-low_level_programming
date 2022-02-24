#include "main.h"

/**
 * cap_string - Capitalize the string
 * @s: the string
 * Return: @s the new string
 */

char *cap_string(char *s)
{
	int i, j, k;
	char set[] = {'\t', ' ', '\n', ',', ';', '.',
		      '!', '?', '"', '(', ')', '{', '}'};

	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < 13; k++)
		{
			if (s[0] > 96 && s[0] < 124)
				s[0] = s[0] - 32;
			if (s[j] == set[k] && (s[j + 1] > 96  && s[j + 1] < 123))
				s[j + 1] = s[j + 1] - 32;
		}
	}
	return (s);
}
