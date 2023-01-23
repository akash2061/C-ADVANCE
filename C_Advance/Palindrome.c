#include <stdio.h>
int main()
{
    int num = 0, n, x, k = 0;
    scanf("%d", &n);
    x = n;
    for (; n > 0;)
    {
        num = n % 10;
        n = n / 10;
        k = k * 10 + num;
    }
    printf("%d\n", k);
    /*
    if (x == k)
        printf("It is Palindrome Number");
    else
        printf("It is not Palindrome Number");
    */
    x == k ? printf("It is Palindrome Number") : printf("It is not Palindrome Number");
    return 0;
}