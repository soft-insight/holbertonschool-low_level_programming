#include "main.h"

char *leet(char *s)
{
	int i, j ,k;
	char set1[] = {'A', 'E', 'O', 'T', 'L'};
	char set2[] = {'a', 'e', 'o', 't', 'l'};
	char rep[] = {'4', '3', '0', '7', '1'};

	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < 5; k++)
		{
			if (s[j] == set1[k] || s[j] == set2[k])
				s[j] = rep[k];
		}
	}
	return (s);
}