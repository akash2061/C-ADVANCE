#include <stdio.h>
int main()
{
    int i, j[5], k, a, n = 5;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &j[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (a = i + 1; a < n; a++)
        {
            if (j[i] == j[a])
            {
                for (k = a; k < n; k++)
                {
                    j[k] = j[k + 1];
                }
                n--;
                a--;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", j[i]);
    }
    return 0;
}

