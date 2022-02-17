#include <stdio.h>
int main (void)
{
	int i, j;
	int n[ 50 ];

	n[1] = 1;
	n[2] = 2;

	for ( i = 3; i < 51; i++ )
	{
		n[ i ] = n[i-1] + n[i-2];
	}

	for (i = 1; i < 51; i++ )
	{
		printf("%d, \n", i, n[i] );
	}
	    return 0;

}
