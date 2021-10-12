#include <stdio.h>
int b = 34;
int func1(int b1)
{
    static int myvar = 10;
    printf("The value of the inside func1 is %d\n", b);
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    return myvar + b;
}
int main()
{
    int b = 344;
    printf("The address of  the inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    printf("The value of b is %d\n", *ptr);
    return 0;
}