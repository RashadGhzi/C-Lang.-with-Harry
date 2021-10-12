#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    int n,sum = 0;
    printf("How much number you want to sum.\n");
    scanf("%d", &num);
    printf("Enter your numbers you wnat to summtion of :\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("%d", sum);
    
    return 0;
}