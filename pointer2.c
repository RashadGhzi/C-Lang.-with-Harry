// #include <stdio.h>
// int main()
// {
//     int a[] = {10, 20, 30, 40, 50};
//     int *ptr = &a[0];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The vlaue of a is %d\n", *ptr);
//         *ptr++;
//     }

//     return 0;
// }

#include <stdio.h>

void swapping(int *ptr, int *ptr2)
{
    int temp;
    temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int a = 10, b = 20;
    printf("The value of a is %d and b is %d\n", a , b);
    // value changed
    swapping(&a,&b);
    printf("The value of a is %d and b is %d\n",a , b);
    return 0;
}