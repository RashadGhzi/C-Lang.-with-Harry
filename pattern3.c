#include<stdio.h>
int main ()
{
    int n;
    printf("Enter your number for pattern: ");
    scanf("%d", &n);


    /*for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= row; colu++)
        {
            printf("%d", colu);
        }
        printf("\n");
    }
    for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= (n-row); colu++)
        {
            printf("%d", colu);
        }
        printf("\n");
    }*/




    /*for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= row; colu++)
        {
            printf("%d", row);
        }
        printf("\n");
    }
    for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= (n-row); colu++)
        {
            printf("%d", (n-row));
        }
        printf("\n");
    }*/
    
    

    for (int row = 1; row <= n; row++)
    {
        for (int colu = n; colu >= row; colu--)
        {
            printf("%d", colu);
        }
        printf("\n");
    }
    

    return 0;
}