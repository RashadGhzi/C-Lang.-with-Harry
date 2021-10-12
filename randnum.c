#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int n)
{
    srand(time(NULL));
    return rand() %n;
}
int main()
{
    int temp, num;
    int array[] = {5, 6, 7};
    temp = random(3);
    num = array[temp];
    printf("Your random number is %d\n", num);
    
    return 0;
}