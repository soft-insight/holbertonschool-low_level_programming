#include "main.h"
#include <stdlib.h>

/**
 * _strlen - check the length of the string.
 * @s: param of the pointer of the string
 * Return: 10 the length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * string_nconcat - concatenates two string till n chars of
 * if n > than s2, returns s2
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2
 *
 * Return: s
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = _strlen(s1);
	j = _strlen(s2);
	if (n < j)
	{
		s = malloc((i + n) * sizeof(char) + 1);
		if (s == NULL)
			return (NULL);
		for (k = 0; k < i + n; k++)
		{
			if (k < i)
				s[k] = s1[k];
			else
				s[k] = s2[k - i];
		}
		s[i + n] = '\0';
	}
	else
	{
		s = malloc((i + j) * sizeof(char) + 1);
		if (s == NULL)
			return (NULL);
		for (l = 0; l < i + j; l++)
		{
			if (l < i)
				s[l] = s1[l];
			else
				s[l] = s2[l - i];
		}
		s[i + j] = '\0';
	}
	return (s);
}
