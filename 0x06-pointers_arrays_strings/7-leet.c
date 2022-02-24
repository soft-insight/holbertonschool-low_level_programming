#include "main.h"

/**
 * leet - encode string to 1377
 * @s: the string
 * Return: the string encoded
 */


char *leet(char *s)
{
	int j, k;
	char set1[] = {'A', 'E', 'O', 'T', 'L'};
	char set2[] = {'a', 'e', 'o', 't', 'l'};
	char rep[] = {'4', '3', '0', '7', '1'};

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < 5; k++)
		{
			if (s[j] == set1[k] || s[j] == set2[k])
				s[j] = rep[k];
		}
	}
	return (s);
}
