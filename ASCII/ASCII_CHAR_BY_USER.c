// take character by user.
#include <stdio.h>
int main()
{
    int i, t;
    scanf("%d", &t);
    for (int x = 0; x < t; x++)
    {
        printf("Enter an integer to print ascii character:\n");
        scanf("%d", &i);
        printf("Character is %c\n", i);
    }
    return 0;
}