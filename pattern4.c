#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter your number for pattern: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int colu = 1; colu <= (n-row); colu++)
        {
            printf(" ");
        }
        for (int colu1 = 1; colu1 <= row; colu1++)
        {
            printf("%d", colu1);
        }
        printf("\n");
        
    }
    
    return 0;
}