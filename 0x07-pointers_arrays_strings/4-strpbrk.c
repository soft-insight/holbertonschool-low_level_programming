#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	while (s[i] !='\0')
		i++;

	while (accept[j] != '\0')
		j++;

	for (l = 0; l < i; l++)
	{
		for (k = 0; k < j; k ++)
		{
			if (s[l] == accept[k])
				s[l] = accept[k];
		}
	}
	return (s);
}
