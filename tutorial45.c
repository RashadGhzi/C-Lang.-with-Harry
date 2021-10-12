#include <stdio.h>
#include <stdlib.h>
int main()
{
    //use of malloc//
    // int *ptr;
    // int n;
    // printf("Enter the size of the arrey you want to creare:\n");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("Enter the value no %d of this arrey\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("The value at %d of this arrey is %d\n", i, ptr[i]);
    // }

    //use of calloc//
    int *ptr;
    int n;
    printf("Enter the size of the arrey you want to create:\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value no %d of this arrey\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("The value at %d of this arrey is %d\n", i, ptr[i]);
    }

    //use of realloc//
    
    printf("Enter the new size of the arrey you want to create:\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the new value no %d of this arrey\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("The new value at %d of this arrey is %d\n", i, ptr[i]);
    }
    free(ptr);

    return 0;
}