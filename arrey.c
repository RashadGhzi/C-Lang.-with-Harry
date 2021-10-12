#include <stdio.h>

int main()
{
    int marks[5] = {10,20,30,40,50};

    

    for (int i = 0; i < 5; i++)
    {
        printf("The student %d is %d\n", i,marks[i] );
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The rule %d is\n", i);
        scanf("%d", &marks[i]);
        printf("%d = %d\n", i, marks[i]);
    }
    // for (int i = 1; i < 5; i++)
    // {
    //     printf("The value %d is %d\n", i, marks[i]);
        
    // }

    // int marks[2][4] = {{50, 60, 70},
    //                   {5, 6, 7}};

    // for (int i = 0; i < 2; i++)
    // {
    
    // for (int j = 0; j < 4; j++)
    // {
    //     printf("%d ", marks[i][j]);
    // }
    
    //     printf("\n");
    // }
    
    

    return 0;
}
