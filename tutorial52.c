#include <stdio.h>
int main()
{
    int a = 340;
    float b = 8.50;

    int *ptr;
    ptr = &a;
    // printf("The value of a is %d\n", *( (int *)ptr ));
    printf("The value of a is %d\n", ptr);

    ptr = &b;
    printf("The value of b is %f\n", *( (float *)ptr ));
 
    return 0;
}