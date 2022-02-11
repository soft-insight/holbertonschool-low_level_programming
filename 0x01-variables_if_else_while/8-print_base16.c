#include <stdio.h>

/**
 * main - print hex
 * Return: 0
 */

int main(void)
{
	int i;
	char hex[16] = "0123456789abcdef";
	char array;

	for (i = 0; i < 16; i++)
	{
		array = hex[i];
		putchar(array);
	}
	putchar('\n');

	return (0);
}
