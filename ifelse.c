#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age \n");

    scanf("%d", &age);
    printf(" You have entered %d as your age \n", age);

    if (age >= 18)
    {

        printf(" You can vote! ");
    }

    else if (age >= 10)
    {

        printf(" Between your age is 10 to 17 you can vote for kids! ");
    }

    else if (age >= 5)
    {

        printf(" Between your age is 5 to 9 you can vote for babies! ");
    }

    else
    {

        printf(" You can not vote! ");
    }

    return 0;
}
