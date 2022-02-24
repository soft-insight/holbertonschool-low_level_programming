#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	k = i - j;
	return(k);
}
