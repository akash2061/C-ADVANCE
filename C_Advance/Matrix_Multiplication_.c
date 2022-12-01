#include <stdio.h>
int main()
{
    int ar, ac, br, bc, i, j;

    printf("Enter rows of matrix A: \n");
    scanf("%d", &ar);
    printf("Enter columns of matrix A: \n");
    scanf("%d", &ac);
    printf("Enter rows of matrix B: \n");
    scanf("%d", &br);
    printf("Enter columns of matrix B: \n");
    scanf("%d", &bc);

    int a[ar][ac];
    int b[br][bc];

    if (ac != br)
    {
        printf("Sorry we cannot multiply matrix A and B\n");
    }
    else
    {
        printf("Enter the elements of matrix A:\n");
        for (i = 0; i < ar; i++)
        {
            for (j = 0; j < ac; j++)
            {
                printf("Enter Element in A%d%d\n", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of matrix B:\n");
        for (i = 0; i < br; i++)
        {
            for (j = 0; j < bc; j++)
            {
                printf("Enter Element in B%d%d\n", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        printf("\n");
        printf("Matrix A:\n");
        for (i = 0; i < ar; i++)
        {
            for (j = 0; j < ac; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("Matrix B:\n");
        for (i = 0; i < br; i++)
        {
            for (j = 0; j < bc; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        int C[ac][br];
        int sum = 0;

        for (i = 0; i < ar; i++)
        {
            for (j = 0; j < bc; j++)
            {
                for (int k = 0; k < br; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                C[i][j] = sum;
                sum = 0;
            }
        }
        printf("Resultant Matrix C:\n");
        for (i = 0; i < ar; i++)
        {
            for (j = 0; j < bc; j++)
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}