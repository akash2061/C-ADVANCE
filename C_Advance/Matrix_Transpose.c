#include <stdio.h>
int main()
{
    int i, j, ar, ac;
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
    for (i = 0; i < ar; i++)
    {
        for (j = 0; j < ac; j++)
        {
            B[i][j] = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = B[j][i];
        }
    }
    printf("\n");
    for (i = 0; i < ar; i++)
    {
        for (j = 0; j < ac; j++)
        {
            printf("%d\t", A[j][i]);
        }
        printf("\n");
    }
    return 0;
}