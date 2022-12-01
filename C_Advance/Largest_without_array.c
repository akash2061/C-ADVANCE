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
        if (l < i)
        {
            l = i;
        }
    }
    printf("%d", l);
    return 0;
}