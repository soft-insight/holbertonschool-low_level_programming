#include <stdio.h>
/**
 * main - using putchar print with space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	j = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if ((i == '8') & (j == '9'))
					putchar('\n');
				else
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	return (0);
}
