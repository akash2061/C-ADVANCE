#include <stdio.h>
int main()
{
    int c = 1;
    for (c = 1; c != 0;)
    {
        float a, b;

        printf("Enter Choice - ");
        printf("1 = Addition\n");
        printf("2 = Subtraction\n");
        printf("3 = Multiplication\n");
        printf("4 = Division\n");
        printf("0 = Exit\n");

        scanf("%d", &c);
        if (c == 0)
        {
            printf("EXIT...");
            return 0;
        }
        printf("Enter two numbers - \n");
        scanf("%f %f", &a, &b);

        switch (c)
        {
        case 1:
        {
            printf("Addition = %f \n", a + b);
            break;
        }
        case 2:
        {
            printf("Subtraction = %f\n", a - b);
            break;
        }
        case 3:
        {
            printf("Multiplication = %f\n", a * b);
            break;
        }
        case 4:
        {
            printf("division = %f\n", a / b);
            break;
        }
        default:
        {
            printf("Enter a valid Choice or EXIT.\n");
            break;
        }
        }
    }
    return 0;
}
