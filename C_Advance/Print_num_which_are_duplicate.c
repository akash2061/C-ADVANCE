#include <stdio.h>
int main()
{
    int i, j[10], k = 0, a;
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &j[i]);
    }
    printf("\n");
    for (i = 0; i < 6; i++)
    {
        for (a = i + 1; a < 6; a++)
        {
            if (j[i] == j[a])
            {
                printf("%d\n", j[i]);
            }
        }
    }
    return 0;
}