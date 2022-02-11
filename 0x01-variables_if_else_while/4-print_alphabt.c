#include <stdio.h>
/**
 * main - loop, if and putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		if ((i == 'q') | (i == 'e'))
			continue;
		i++;
	}

	return (0);
}
