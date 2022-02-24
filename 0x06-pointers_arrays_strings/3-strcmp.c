#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2 to compare with s1
 * Return: k
 */


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

	if (k ==  0)
		return (0);
	else
		return (k);
}
