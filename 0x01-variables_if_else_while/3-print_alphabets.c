#include <stdio.h>
/**
 * main - loops two while
 * print alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
