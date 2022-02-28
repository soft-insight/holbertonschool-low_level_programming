#include "main.h"

/**
 * _memcpy - copies mem area form src to dest
 * @dest: destine string
 * @src: string source
 * @n: number of bytes form src to dest
 * Return: dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	unsigned int j;

	while (i != '\0')
		i++;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
