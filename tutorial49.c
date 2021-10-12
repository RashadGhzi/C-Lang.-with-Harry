#include <stdio.h>
// int myvar;
// int func(int a, int b)
// {
//     auto int myvar;
//     myvar = a + b;
//     return myvar;
// }
// int main()
// {
//     int myvar = func(2,5);
//     printf("The myvar is %d\n", myvar);

//     return 0;
// }

// int myvar = 344;
// int func()
// {
//     extern int myvar;
//     return myvar;
// }
// int main()
// {
//     func();
//     printf("The myvar is %d\n", myvar);

//     return 0;
// }


int func()
{
    static int myvar;
    myvar++; 
    printf("The myvar is %d\n", myvar);
    return myvar;
}
int main()
{
    int myvar = func();
    myvar = func();
    myvar = func();
    myvar = func();
    return 0;
}

// int func()
// {
//     static int myvar;
//     myvar++;
//     printf("The myvar is %d\n", myvar);
//     return myvar;
// }
// int main()
// {
//     register int myvar = func();
//     myvar = func();
//     myvar = func();
//     myvar = func();
//     return 0;
// }