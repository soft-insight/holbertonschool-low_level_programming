#include "main.h"


void rev_string(char *s)
{
	int b = 0;
	int i, temp;

	while(s[b] != '\0')
		b++;

	for (i = b - 1; i >= b / 2; i--)
	{
		temp = s[i];
		s[i] = s[b - 1 - i];
		s[b - 1 - i] = temp;
	}
}
