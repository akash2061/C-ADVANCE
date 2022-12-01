#include <stdio.h>
int main()
{
    int i, j, n[5], a = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter N%d\n", i + 1);
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (n[i] > n[j])
            {
                a = n[i];
                n[i] = n[j];
                n[j] = a;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("N%d = %d\n", i + 1, n[i]);
    }
    return 0;
}