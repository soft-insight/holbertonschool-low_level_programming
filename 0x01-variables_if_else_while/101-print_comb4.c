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
	int k;

	i = '0';
	j = '0';
	k = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i == '7') & (j == '8') & (k == '9'))
						putchar('\n');
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
