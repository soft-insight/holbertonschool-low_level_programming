#include <stdio.h>
/**
 * main - using putchar print with space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}


	return (0);
}
