//Add libraries.
#include <stdio.h>
#include <stdlib.h>
/*
    Project Description:
        This is a simple code about pointers and their use show
        the value taken by the pointer.
*/

//Main function.
int main()
{
    char var = 'A', *P; //Create a char variable, and char pointer type.
    P = &var; //Assign to the pointer char value address of the variable.

    printf("Hello everyone and welcome to this program!\n");
    printf("\nThe var value is: %c", *P); //Show
    printf("\nThe address of the pointer is: %d", P);

    return 0;
}
