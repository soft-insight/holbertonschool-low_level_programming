#include "main.h"
#include <stdlib.h>

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

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
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

		s = malloc(j * sizeof(char) + 1);
		if (s == NULL)
			return (NULL);
		for (l = 0; l < j; l++)
			s[l] = s2[l];
		s[j] = '\0';
	}
	return (s);
}
