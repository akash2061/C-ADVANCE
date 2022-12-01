#include <stdio.h>
int main()
{
    int i, j, ar, ac, n;
    printf("Enter raws:\n");
    scanf("%d", &ar);
    printf("Enter columns:\n");
    scanf("%d", &ac);
    int A[ar][ac];
    int B[ar][ac];
    for (i = 0; i < ar; i++)
    {
        for (j = 0; j < ac; j++)
        {
            printf("Enter element A%d%d\n", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < ar; i++)
    {
        for (j = 0; j < ac; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    // if (ar < ac || ar > ac)
    // {
    //     n = ar;
    //     ar = ac;
    //     ac = n;
    // }
    for (i = 0; i < ar; ++i)
    {
        for (j = 0; j < ac; ++j)
        {
            B[j][i] = A[i][j];
        }
    }
    printf("\n");
    for (i = 0; i < ac; ++i)
    {
        for (j = 0; j < ar; ++j)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    // printf("\n");
    // for (i = 0; i < ar; i++)
    // {
    //     for (j = 0; j < ac; j++)
    //     {
    //         printf("%d\t", A[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}