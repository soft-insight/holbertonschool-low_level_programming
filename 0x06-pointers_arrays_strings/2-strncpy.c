#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: the recipient
 * @src: the source
 * @n: the number of characters to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
