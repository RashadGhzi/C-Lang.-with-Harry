#include <stdio.h>

int gotnumber()
{
    int i;                      //without arguments and with return value cp note page 13
    printf("Enter your number\n");
    scanf("%d", &i);
    return i;
}
int main()
{
    int c;
    c = gotnumber();
    printf("Your entered number is %d\n", c);
    return 0;
}
