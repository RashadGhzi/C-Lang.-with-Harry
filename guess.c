#include <stdio.h>
int main()
{
    int num, i = 1,rand = rand;
    printf("Guess the point. \nBy guessing correct point you can win this game.\n");
    printf("You will get 5 chances to guess correct point.\n");
    while (i <= 5)
    {
        scanf("%d", &num);
        if (num == 50)
        {
            printf("Yeah, You got it. You won this game.\n");
            break;
        }
        else if ((num <= 45) && (num >= 1))
        {
            printf("No its not, You need to guess more point.\n");
        }
        else if ((num <= 49) && (num >= 46))
        {
            printf("Guess little more point.\n");
        }
        else if ((num >= 51) && (num <= 54))
        {
            printf("Guess little low point.\n");
        }
        else if ((num >= 55) && (num <= 100))
        {
            printf("No its not, You need to guess low point.\n");
        }
        else
        {
            printf("error.\n");
        }
        i = i + 1;
        switch (i)
        {
        case 5:
            printf("You have one more chance to guess correct point.\n");
            continue;
        case 6:
            printf("Game over.\n");
            break;
        default:
            break;
        }
    }
    return 0;
}