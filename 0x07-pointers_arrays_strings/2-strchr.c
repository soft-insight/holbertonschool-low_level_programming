#include "main.h"

char *_strchr(char *s, char c)
{
	int i, j;
	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			s = s + j;
			return(s);
		}
	}

	return ('\0');
}
