#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	while(dest[i] != '\0')
		i++;

	while(src[j] != '\0')
		j++;

	for (k = 0; k < i + j; k++)
	{
		if (k < i)
		{
			dest[k] = dest[k];
		}
		else
		{
			dest[k] = src[k - i];
		}
       }

	return(dest);
}
