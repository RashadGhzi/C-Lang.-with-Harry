#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random1(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    printf("%d", random1(5));
    return 0;
}