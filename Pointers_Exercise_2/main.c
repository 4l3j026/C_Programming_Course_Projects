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

    p = &a; //Assigning to the pointer the A variable.

    printf("The pointer value is: %d", *p); //Show pointer.

    b = *p + 1; //Modifying the b variable.

    printf("\nThe value of the b variable is: %d", b); //Show the variable.

    *p = 26; //Assigning the to the pointer new value.

    /*
        Here I'll show the "a" variable because the address
        of the pointer it's the same as that of the variable.
        It's an indirect way to manipulating variable value.
    */
    printf("\nThe new value of pointer is: %d", a);

    return 0;
}
