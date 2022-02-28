#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	unsigned int j;

	while(i != '\0')
		i++;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
