//Add libraries.
#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        This program modify the variable value trough pointer.
*/

//Main function.
int main()
{
    //Create variables and the pointer.
    short a = 8, b = 10, *p;
    p = &a;
    printf("The pointer value is: %d", *p);

    b = *p + 1;

    printf("\nThe value of the b variable is: %d", b);

    *p = 26;

    printf("\nThe new value of pointer is: %d", *p);

    return 0;
}
