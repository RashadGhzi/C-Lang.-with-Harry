
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    float num, num1;
    printf("Welcome to our calculator\n");
    printf("Enter the number you want to calculate.\n");
    printf("1.(+). \n2.(-). \n3.(*). \n4.(/).\n");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("Enter first number.\n");
        scanf("%f", &num);
        printf("Enter second number.\n");
        scanf("%f", &num1);
        printf("%.2f + %.2f = %.2f\n", num, num1, num+num1);
    }
    else if (a == 2)
    {
        printf("Enter first number.\n");
        scanf("%f", &num);
        printf("Enter second number.\n");
        scanf("%f", &num1);
        printf("%.2f - %.2f = %.2f\n", num, num1, num-num1);
    }
    else if (a == 3)
    {
        printf("Enter first number.\n");
        scanf("%f", &num);
        printf("Enter second number.\n");
        scanf("%f", &num1);
        printf("%.2f x %.2f = %.2f\n", num, num1, num*num1);
    }
    else if (a == 4)
    {
        printf("Enter first number.\n");
        scanf("%f", &num);
        printf("Enter second number.\n");
        scanf("%f", &num1);
        printf("%.4f / %.4f = %.4f\n", num, num1, num/num1);
    }
    else
    {
        printf("error");
    }
    return 0;
}