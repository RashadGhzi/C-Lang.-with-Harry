/*#include <stdio.h>
void swap(int x, int y)
{
int temp;
temp=x;
x=y;
y=temp;
}
void main()
{ 
int r=10, v=20; 
swap(r, v);  // passing value to function
printf("\nValue of r: %d",r);
printf("\nValue of v: %d",v);
} */

#include <stdio.h>

void changeValue(int* x, int* y)
{
    int temp;
    
    temp = *x, *y;
    *x = *x + *y;
    *y = *x / *x;  
     
      
    return;
}

int main()
{
    int a = 4, b = 3;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    changeValue(&a,&b);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}


// Quick Quiz:
// Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1

