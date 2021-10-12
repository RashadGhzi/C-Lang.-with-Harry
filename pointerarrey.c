#include <stdio.h>

int main()
{
    int a = 10;
    int *ptra = &a;
    printf("Lets learn about pointer:\n");
    printf("The value of a %d\n", a);
    printf("The value of a is %d\n", *ptra);
    printf("The address of a is %p\n", ptra);
    printf("The address of pointer a is %p\n", &ptra);
    printf("The address of  a %p\n", &a);

    return 0;
}
