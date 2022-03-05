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
	int k = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && k == 0)
	{
		k = s1[i] - s2[i];
		i++;
	}
	return (k);
}
