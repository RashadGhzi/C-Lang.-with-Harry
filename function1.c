#include <stdio.h>
//int sum(int a, int b);

int sum(int a, int b)
{
    return a + b;
}

int main() // with arguments and with return value c programming note page 13
{
    int a, b, c;
    a = 10;
    b = 20;
    c = sum(a, b);

    printf("The sum is %d \n", c);
    return 0;
}
/*int sum (int a, int b)
{
return a + b;
}*/