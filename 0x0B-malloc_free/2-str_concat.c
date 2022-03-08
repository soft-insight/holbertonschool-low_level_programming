#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */


char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *str;

	i = 0;
	j = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	str = malloc((i + j) * sizeof(char) + 1);

	for (k = 0; k < i + j; k++)
	{
		if (k < i)
			str[k] = s1[k];
		else
			str[k] = s2[k - i];
	}
	return (str);
}

