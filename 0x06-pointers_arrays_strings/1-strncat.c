#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		j++;

	for (k = 0; k < i + n; k++)
	{
		if (k < i)
			dest[k] = dest[k];
		else if (k - i < j)
			dest[k] = src[k - i];
		else
			break;
	}
	return (dest);
}
