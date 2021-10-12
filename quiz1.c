#include <stdio.h>

int main()
{
    int a;
    printf("Choose your subjects those you have passed in the final exam \n1. Math \n2. Science \n3. Math and Science \n");
    scanf("%d", &a);

    if(a==1) {
    printf("You selected math subject. Now, Your point is 15 ");}

    else if(a==2){
    printf("You selected science subject. Now, your point is 15");}

    else if(a==3){
    printf("You selected math and science subject. Now, your point is 45");}

    else {
    printf("Invalid keyword");
    }
    return 0;
}
