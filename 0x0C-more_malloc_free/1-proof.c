#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int i, j, k, l;
        char *str;

        i = 0;
        j = 0;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";
        while (s1[i])
                i++;
        while (s2[j])
                j++;
        if (n < j)
        {
                str = malloc((i + n) * sizeof(char) + 1);
                if (str == NULL)
                        return (NULL);
                for (k = 0; k < i + n; k++)
                {
                        if (k < i)
                                str[k] = s1[k];
                        else
                                str[k] = s2[k - i];
                }
                str[i + n] = '\0';
        }
        else
        {

                str = malloc(j * sizeof(char) + 1);
                if (str== NULL)
                        return (NULL);
                for (l = 0; l < j; l++)
                        str[l] = s2[l];
                str[j] = '\0';
        }
        return (str);
}

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
} 