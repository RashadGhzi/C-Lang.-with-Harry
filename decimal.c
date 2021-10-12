#include <stdio.h>
#define PI 3.1416
int main()
{
    const float a = 7.33; //wrong because const cannot be changed   
    //a = 4.88;

    printf ("%.8f this\n", a);
    printf ("%f\n", a);
    printf ("%f\n", a);
    printf ("%f\n", PI); //RIGHT WAY
    printf ("%f\n", PI); //wrong way

    return 0;
}
