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

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;

	strcp = malloc(j * sizeof(char));

	for (i = 0; i < j; i++)
		strcp[i] = str[i];

	return (strcp);
}
