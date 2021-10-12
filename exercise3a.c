#include <stdio.h>

int main()
{
    char input;
    float kmsTomiles = 0.621371;
    float milesTokms = 1.60934;
    float poundTokgs = 0.453592;
    float kgsTopound = 2.20462;
    float first, second;

    while (1)
    {
        
        printf("Enter the character. q to quiet\n    1. kms to miles\n    2. miles to kms\n    3. pound to kgs\n    4. kgs to pound\n");
        scanf(" %c", &input);

    switch (input)
    {
    case 'q':
        printf("quitting the program...");
        goto end;
        break;
    case '1':
        printf("Kms to Miles. \nEnter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * kmsTomiles;
        printf("%.2f kms = %.2f miles\n\n\n", first, second);
        break;
    case '2':
        printf("Miles to kms. \nEnter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * milesTokms;
        printf("%.2f miles = %.2f kms\n\n\n", first, second);
        break;
    case '3':
        printf("Pound to kgs. \nEnter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * poundTokgs;
        printf("%.2f pound = %.2f kgs\n\n\n", first, second);
        break;
    case '4':
        printf("Kgs to Pound. \nEnter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * kgsTopound;
        printf("%.2f kgs = %.2f pound\n\n\n", first, second);
        break;    

    default:
        break;
        }
    }

    end:
    return 0;
}
