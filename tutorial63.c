#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number to check weather it is palindrome or not.\n");
    scanf("%d", &number);

    if (palindrome(number))
    {
        printf("Yes, it is palindrome");
    }
    
    return 0;
}