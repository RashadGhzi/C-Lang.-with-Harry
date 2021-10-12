// #include <stdio.h>

// int main()
// {
//     int avg = 0, num;
//     int a[10];
//     printf("How many variable you want from 1 to 10?\n");
//     scanf("%d", &num);

//         for (int i = 1; i <= num; i++)
//         {
//             printf("Enter your value : \n");
//             scanf("%d", &a[i]);
//             printf("Number %d value is %d\n", i, a[i]);
//         }
//         for (int i = 1; i <= num; i++)
//         {
//             avg = avg + a[i];
//         }

//         printf("Entered values sum is %d\n", avg);
//         printf("Entered values average is %.2f", (float)avg/num);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, *ptr1, *ptr2;
    printf("Enter the size of the array you want: ");
    scanf("%d", &a);
    ptr1 = (int *)malloc(a * sizeof(int));
    for (int i = 1; i <= a; i++)
    {
        printf("Enter your value\n");
        scanf("%d", &ptr1[i]);
        printf("The no.%d value is %d\n", i, ptr1[i]);
    }

    // ptr2 = (int *)calloc(a, sizeof(int));
    // for (int i = 1; i <= a; i++)
    // {
    //     printf("Enter your vlue\n");
    //     scanf("%d", &ptr2[i]);
    //     printf("The no. %d is %d\n", ptr2[i], b);
    // }

    printf("By entering number you can increase your array size\n");
    scanf("%d", &a);
    ptr1 = (int *)realloc(ptr1, a * sizeof(int));
    for (int i = 1; i <= a; i++)
    {
        printf("Enter your value\n");
        scanf("%d", &ptr1[i]);
        printf("The no.%d is %d\n", i, ptr1[i]);
    }

    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Memory allocation succesful\n");
        free(ptr1);
        // free(ptr2);
        printf("Memory freed succesfully.\n");
    }

    return 0;
}