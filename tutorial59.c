#include <stdio.h>
#include "tutorial59a.c"
#define PI 3.1416
#define SQUARE(r) r*r //MACROWS
int main()
{
    int r = 10;
    printf("My name is %s\n", name);
    printf("My age is %d\n", age);
    printf("The value of PI is %f\n", PI);
    printf("The area of circle is %f\n", PI*SQUARE(r));
    return 0;
}