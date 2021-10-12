#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j<rows-i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}

int main()
{
    int rows, type;
    printf("Enter 0 for star pattern or \nEnter 1 for reverse star pattern\n");
    scanf("%d", &type);
    switch (type)
    {
    case 0:
        printf("How many rows of star pattern do you want?\n");
        scanf("%d", &rows);
        starpattern(rows);
        break;
    
    case 1:
        printf("How many rows of reverse star pattern do you want?\n");
        scanf("%d", &rows);
        reversestarpattern(rows);
        break;

    default:
        printf("You entered an invalid kewword\n");
        break;
    }
    
    return 0;
}