#include "main.h"

char *cap_string(char *s)
{
	int i, j, k;
	char set[] = {'\t', ' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	i = 0;

	while (s[i] != '\0')
		i++;
	for (k = 0; k < 13; k++)
	{
		for (j = 0; j < i; j++)
		{
			if (s[j] == set[k] && (s[j + 1] >= 'a')  && (s[j + 1] < 'z') )
				s[j + 1] = s[j + 1] - 32;
		}
	}
	return (s);
}
