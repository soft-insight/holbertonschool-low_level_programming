#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
    char *s;

	i = 0;
	j = 0;

	while(s1[i])
		i++;
	printf("%d\n", i);
	while(s2[j])
		j++;
	printf("%d\n", j);


	if (n < j)
	{
		s = malloc((i + n) * sizeof(char) + 1);
        if (s == NULL)
			return (NULL);

		for (k = 0; k < i + n; k ++)
		{
			if (k < i)
				s[k] = s1[k];
			else
				s[k] = s2[k - i];
		}
	 }
	else
	{
		s = malloc(j * sizeof(char));
		if (s == NULL)
			return (NULL);

		for (l = 0; l < j; l++ )
			s[l] = s2[l];
	}
	return(s);
}


int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 10);
    printf("%s\n", concat);
    free(concat);
    return (0);
}


