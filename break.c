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

        if (age > 10)
        {
            printf("You are not accepted");
            break;
        } 

        printf("He is good boy\n");
    }
    return 0;
}
