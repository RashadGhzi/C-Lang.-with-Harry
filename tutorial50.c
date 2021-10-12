#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars;
    char *ptr;
    char a, b;
    int i = 0;
    while (i<3)
    {
    printf("Employee %d: Enter the number of your employee id:\n", i+1);
    scanf("%d", &chars);
    getchar();
    printf("Enter the vlaue of a\n");
    scanf("%c", &a);
    getchar();
    printf("Enter the value of b\n");
    scanf("%c", &b);
    ptr = (char *)malloc((chars+1)*sizeof(char));
    printf("Enter your employee id:\n");
    scanf("%s", ptr);
    printf("Your employee id is %s\n", ptr );
    free(ptr);
    i = i + 1;
    }
    return 0;
}