#include <stdio.h>
int main()
{
    int i, j = 0, l = 0;
    while (1)
    { 
        scanf("%d", &i);
        if (i == -1)
        {
            break;
        }
        if (i > j)
        {
            l = j;
            j = i;
        }
        else if (j == l)
        {
            j = l;
            l = i;
        }
        else if (i < l && i > j)
        {
            l = i;
        }
        if (l < i)
        {
            l = i;
        }
    }
    printf("%d", l);
    return 0;
}