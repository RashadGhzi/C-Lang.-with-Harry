#include <stdio.h>

int main()
{

    int point;
    printf("Enter your point\n");
    scanf("%d", &point);

    switch (point)
    {
    case 1:
        printf("Point is 1\n");

        int value;
        printf("Enter your value\n");
        scanf("%d", &value);
        switch (value)
        {
        case 45:
            printf("Value is 45\n");
            break;

        case 50:
            printf("Value is 50\n");
            break;

        default:
            printf("Value is not 45 and 50\n");
        }
        break;
    case 2:
        printf("Point is 2\n");
        break;

    default:
        printf("Point is not 1 and 2\n");
    }

    return 0;
}
