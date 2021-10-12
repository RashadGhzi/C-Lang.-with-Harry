#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Today date is %s\n", __DATE__);
    printf("Now time is %s\n", __TIME__);
    printf("The line number is %d\n", __LINE__);
    printf("The file name is %s\n", __FILE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}