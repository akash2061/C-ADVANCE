#include <stdio.h>
int main()
{
    int i, sl = -99999, l = -99999;
    while (1)
    {
        scanf("%d", &i);
        if (i == -1)
        {
            break;
        }
        if (i > l)
        {
            sl = l;
            l = i;
        }
        else if (i > sl)
        {
            sl = i;
        }
    }
    printf("%d", sl);
    return 0;
}