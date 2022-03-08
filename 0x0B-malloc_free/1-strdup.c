#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

char *_strdup(char *str)
{
	char *strcp;
	int i, j;

	j = 0;
	while( str[j] != '\0')
		j++;

	strcp = malloc(j * sizeof(char));

	for (i = 0; i < j; i++)
		strcp[i] = str[i];
	
	return(strcp);
}
