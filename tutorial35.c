#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "harry";
    char s2[] = "money";
    char s3[55];
    printf("The strcmp for s1, s2 returned %d\n", strcmp(s1, s2));
    puts (strcat(s1, s2));
    printf("The lenght of s1 is %d\n", strlen(s1));
    printf("The lenght of s2 is %d\n", strlen(s2));
    printf("The reversed s1 is:\n");
    puts(strrev(s1));
    printf("The reversed s2 is:\n");
    puts(strrev(s2));
    strcpy(s3, strcat(s1,s2));
    puts(s3);
    return 0;
}