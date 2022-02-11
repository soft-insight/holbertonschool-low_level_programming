#include <stdio.h>
/**
 * main - using putchar alphabet in descendent order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'z';

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
