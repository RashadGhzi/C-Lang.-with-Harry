#include <stdio.h>

int main()
{
    printf("Hello World\n");

    int i = 0, j = 0;
    for (i = 0, j = 0;  i < 6, j < 6; i++, j++)
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}
