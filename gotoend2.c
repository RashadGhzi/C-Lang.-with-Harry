#include <stdio.h>

int main()
{
    // label:
    //     printf("we are inside label\n");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("we are at end\n");

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("Your number is %d\n", i);
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:

    return 0;
}
