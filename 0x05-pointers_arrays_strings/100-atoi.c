#include "main.h"

/**
 *
 *
 *
 */

int _atoi(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (s[j] > 47 || s[j] < 58)
			s[j] = s[j];
		else
			s[j] = '0';
	}
	return (*s);
}
