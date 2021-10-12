#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, kam;
    printf("Enter the number you want to factorial of:\n");
    scanf("%d", &num);
    kam = 1;
    for (int i = 1; i <= num; i++)
    {
        kam = kam*i;
    }
    printf("The factorial of %d is %d",num, kam);
    
    return 0;
}