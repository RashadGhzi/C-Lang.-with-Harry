#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char fav_actor[30];
    char fav_athlentic[30];
};
int main()
{
    struct student ravi, rony, johny, rocky;
    ravi.id = 1;
    rony.id = 2;
    johny.id = 3;
    rocky.id = 4;
    
    ravi.marks = 10;
    rony.marks = 20;
    johny.marks = 30;
    rocky.marks = 40;

    ravi.fav_char = 'p';
    rony.fav_char = 'y';
    johny.fav_char = 'd';
    rocky.fav_char = 'n';

    printf("Ravi id is %d\n", ravi.id);
    printf("Rony id is %d\n", rony.id);
    printf("Johny id is %d\n", johny.id);
    printf("Rocky id is %d\n", rocky.id);

    printf("Ravi got marks %d\n", ravi.marks);
    printf("Rony got marks %d\n", rony.marks);
    printf("John got marks %d\n", johny.marks);
    printf("Rocky got marks %d\n", rocky.marks);

    printf("Ravi favourite character is %c\n", ravi.fav_char);
    printf("Rony favourite characer is %c\n", rony.fav_char);
    printf("Johny favourite character is %c\n", johny.fav_char);
    printf("Rocky favourite character is %c\n", rocky.fav_char);
    
    strcpy(ravi.fav_actor,"Amir Khan");
    printf("Ravi favourite actor is %s\n", ravi.fav_actor); 
    strcpy(rony.fav_actor, "Salman Khan");
    printf("Rony favourite actor is %s\n", rony.fav_actor);
    strcpy(johny.fav_athlentic, "Khabib Nurmagomedov");
    printf("Johny favourite athlentic is %s\n", johny.fav_athlentic);
    strcpy(rocky.fav_athlentic, "Cristiano Ronaldo");
    printf("Rocky favourite character is %s", rocky.fav_athlentic);

    return 0;
}