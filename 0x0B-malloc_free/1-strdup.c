#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy string
 * @str: pointer to str
 *
 * Return: strcp
 */

char *_strdup(char *str)
{
	char *strcp;
	int i, j;

	j = 0;
	while (str[j] != '\0')
		j++;

	if (str == NULL || j == 0)
		return (NULL);


	strcp = malloc(j * sizeof(char));

	for (i = 0; i < j; i++)
		strcp[i] = str[i];

	return (strcp);
}
