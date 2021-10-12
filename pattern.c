#include <stdio.h>
int main()
{
    int row,colu,n;
    printf("Enter your number pattern:");
    scanf("%d", &n);
    /*
    for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= row; colu++)
        {
            printf("%d", colu);
        }
        printf("\n");
    }*/


   /* for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= row; colu++)
        {
            printf("%d", row);
        }
        printf("\n");
    }*/
    
    /*int a = 0;
    int b = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= row; colu++)
        {
            printf("%d", colu%2);
        }
        printf("\n");
    }*/


    /*for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= row; colu++)
        {
            printf("%d", row%2);
        }
        printf("\n");
    }*/
    

    /*for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= row; colu++)
        {
            printf("%c ", colu+64);  // For Alphabetic letter(65) and for small letter (97)
        }
        printf("\n");
    }*/
    
    

    /*for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= row; colu++)
        {
            printf("%c ", row+96);  // For Alphabetic letter(65) and for small letter (97)
        }
        printf("\n");
    }*/



    for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= row; colu++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}