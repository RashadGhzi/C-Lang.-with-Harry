#include <stdio.h>

int main()
{
    int num, value = 5;
    printf("Enter your number\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", value + 1);
        value = value + 1;

    } while (value < num);


    return 0;
}
