#include <stdio.h>
#include <string.h>

int main()
{
    
    char str1[35];
    char str2[35];
    gets (str1);
    gets (str2);

    printf("%s is a friend of %s\n", str1, str2);

    return 0;
}