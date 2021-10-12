#include <stdio.h>
int main()
{
    int num;
    printf("If you wnat to enter PUBG gaming studio then press 1.\nIf you want to enter FREE FIRE gaming studio then press 2.\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Now, You have entered online best PUBG gaming studio\n");
        int pubg;
        printf("Buy PUBG UC then press 1. \nBuy PUBG rewards then press 2.\n");
        scanf("%d", &pubg);
        switch (pubg)
        {
        case 1:
            printf("You have entered in PUBG buying UC. Please, Join our facebook group there you can get all of information.");
            break;
        case 2:
            printf("Select your rewards.");
            break;

        default:
            printf("You have entered an invlaid kewords!");
            break;
        }
        break;

    case 2:
        printf("Now, You have entered online best FREE FIRE  gaming studio.\n");
        int freefire;
        printf("Buy diamond then press 1.\nBuy rewards then press 2.\n");
        scanf("%d", &freefire);

        if (freefire == 1)
        {
            printf("You have entered in buying freefire rewards. Please, Join our facebook group there you can get all of information");
        }
        else if (freefire == 2)
        {
            printf("Select your rewards");
        }
        else
        {
            printf("You have entered an invalid keywords!");
        }

    default:
        printf("You have entered an invalid keywords");
        break;
    }

    return 0;
}