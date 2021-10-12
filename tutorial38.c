#include <stdio.h>
typedef struct student
{
    int id;
    int marks;
}std;
int main()
{
    /*typedef int* intpointer;
    ntpointer a,b;
    int c = 60;
    a = &c;
    b = &c;*/
    
    std s1,s2;
    s1.id = 30;
    s2.marks = 40;

    printf("Your id number is %d\n", s1.id);
    printf("Your id marks is %d\n", s2.marks);
    return 0;
}