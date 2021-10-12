#include <stdio.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')   // character print formula in c programm
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[6] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[6] = {"harry"};
    char str[12];
    gets (str);
    printf("RaKIB is a GOOD boy\n");
    printf("Also nice\n");
    printf("Rahad is a %s\n", str);
    puts ("Rashad is a coward");
    printStr(str);
    printf("Rony is a bad boy");
    return 0;
}