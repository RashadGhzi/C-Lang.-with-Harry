#include <stdio.h>

int main()
{

    printf("Harry is good boy\n");
    
label:
    printf("We are inside label\n");
    goto end;

    printf("Hello World\n");
end:
    printf("We are at end\n");
    goto label;

    return 0;
}
