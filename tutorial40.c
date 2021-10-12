#include <stdio.h>
void array(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
       printf("The value of %d is %d\n", i, arr[i]);
    }
    
}
void revarray(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
    
}
int main()
{
    int arr[] = {1,2,3,4,5,6,67};
    array(arr);
    revarray(arr);
    array(arr);
    return 0;
}