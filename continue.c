#include <stdio.h>

int main()
{
    printf("Hello World");

    int i, age;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", i);
        printf("Enter Your age\n");
        scanf("%d", &age);
            
        if (age < 10)
        {
            continue;
        }
        else
        {
            break;
        }
        
    }
            printf("You can play this game\n");
            printf("You can play this game\n");
            printf("You can play this game\n");
    
    return 0;
}
