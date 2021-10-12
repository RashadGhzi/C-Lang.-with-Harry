#include <stdio.h>
union student
{
    int id;
    int marks;
    char fav_char;

};
int main()
{
    union student ravi, rony;
    ravi.id = 6;
    rony.id = 5;    

    ravi.fav_char = 'p';
    rony.fav_char = 'y';
    
    ravi.marks = 10;
    rony.marks = 20;

    printf("Ravi favourite character is %c\n", ravi.fav_char);
    printf("Rony favourite characer is %c\n", rony.fav_char);
  
    printf("Rony got marks %d\n", rony.marks);
    printf("Ravi got marks %d\n", ravi.marks);

    printf("Ravi id is %d\n", ravi.id);
    printf("Rony id is %d\n", rony.id);
    
    return 0;
}