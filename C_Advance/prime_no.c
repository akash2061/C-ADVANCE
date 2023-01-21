#include <stdio.h>
int main()
{
    int a, b, c = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (b = 2; b * b <= a; b++)
    {
        if (a % b == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
    {
        printf("It's a prime no.");
    }
    else
    {
        printf("It's not a prime no.");
    }
    return 0;
}