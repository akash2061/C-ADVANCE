#include <stdio.h>
// trace = sum of diagonal element.
int main()
{
    int i, j, ar, ac, s = 0;
    printf("Enter raws of matrix:\n");
    scanf("%d", &ar);
    printf("Enter columns of matrix:\n");
    scanf("%d", &ac);
    int t[ar][ac];
    for (i = 0; i < ar; i++)
    {
        for (j = 0; j < ac; j++)
        {
            printf("Enter element A%d%d\n", i, j);
            scanf("%d", &t[i][j]);
        }
    }
    printf("Matrix A:\n");
    for (i = 0; i < ar; i++)
    {
        for (j = 0; j < ac; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < ar; i++)
    {
        for (j = 0; j < ac; j++)
        {
            if (i == j)
            {
                s += t[i][j];
            }
        }
    }
    printf("Trace of matrix = %d", s);
    return 0;
}