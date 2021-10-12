#include <stdio.h>

int main()
{
    int marks;
    
    printf("Enter your marks\n");
    scanf("%d", &marks);

        switch (marks)
        {
        case 80:
            printf("Your marks 80\n");

                int point;
                printf("Enter your point\n");
                scanf("%d", &point);
                    
                    switch (point)
                    {
                    case 5:
                        printf("Your point is 5\n");
                        break;
                    
                    case 4:
                        printf("Your point is 4\n");
                        
                        int value;
                        printf("Enter your value\n");
                        scanf("%d", &value);

                            switch (value)
                            {
                            case 100:
                                printf("Your value is 100\n");
                                break;
                            
                            default:
                                printf("Your value is not 100\n");
                                break;
                            }
                            break;
                    
                    default:
                        printf("Your point is not 5 and 4\n");
                        break;
                    }
                    break;
        
        case 75:
        printf("Your marks is 75\n");

            int average;
            printf("For marks average press 1\n");
            scanf("%d", &average);

                switch (average)
                {
                case 1:
                    printf("Your marks average is 77.5\n");
                    break;
                
                default:
                    printf("Your marks average is not mached");
                    break;
                }
        break;
        
        default:
            printf("Your point is not 100 and 75\n");
            break;
        }
    return 0;
}
