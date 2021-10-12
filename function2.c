#include <stdio.h>
void printstar (int n)

{
    for (int i = 0; i < n; i++)  //with arguments and without return value cp note page 13
    {
        printf("%c", '*');
    }
    
}
int main()
{
    printstar(7);
    return 0;
}




