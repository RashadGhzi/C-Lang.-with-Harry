#include <stdio.h>
int main()
{
    int a = 10;
    int* ptra = &a;
    printf ("%d\n", a);
    printf ("%p\n", &a);
    return 0;
}