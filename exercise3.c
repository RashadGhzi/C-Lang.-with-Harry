#include <stdio.h>

int main(int argc, char const *argv[])
{
    int  user, unit1;
    float result1;
   
    printf("What type of conversion you want?\n");
    printf("Enter 0 to quiet. \nType 1 for meters to centemeter or centemeter to meters.\nType 2 for kms to miles or miles to kms.\nType 3 for feet to inches or inches to feet.\n");
    scanf("%d", &user);
    
    switch (user)
    {
    
    case 0:
        printf("Quitting the programm....");
        break;
   
    case 1:
        printf("Type 1 meters to centemeter.\nType 2 centemeter to meters.\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("Enter your length:");
            scanf("%f", &result1);
            printf("%f meters = %f cm", result1, result1 * 100);
        }
        else if (unit1 == 2)
        {
            printf("Enter your length:");
            scanf("%f", &result1);
            printf("%f cm = %f meters", result1, result1 / 100);
        }

        break;

    case 2:
        printf("Type 1 kms to miles. \nType 2 miles to kms.\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("Enter your length:");
            scanf("%f", &result1);
            printf("%f kms = %f miles", result1, result1 / 1.60934);
        }
        else if (unit1 == 2)
        {
            printf("Enter your length:");
            scanf("%f", &result1);
            printf("%f miles = %f kms", result1, result1 * 1.60934);
        }
        break;

    case 3:
        printf("Type 1 feet to inches. \nType 2 inches to feet.\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("Enter your lenght:");
            scanf("%f", &result1);
            printf("%f feet = %f inches", result1, result1*12);
        }
        if (unit1 == 2)
        {
            printf("Enter your lenght:");
            scanf("%f", &result1);
            printf("%f inches = %f feet", result1, result1/12);
        }
        break;

    default:
        printf("Sorry!!!\nYou typed invalid keyword!\n");
        break;
        
    }
    
    return 0;
}
