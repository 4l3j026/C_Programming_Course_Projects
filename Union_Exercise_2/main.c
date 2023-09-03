#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        This exercise assign to different types variables to same memory address.

*/

union Test{

    int Var_1;
    int Var_2;
    char Var_3;
};

int main()
{
    //Way to declare a variable of the union structure.
    union Test Object;

    printf("Hi everyone and welcome to this program!\n");

    Object.Var_1 = 4;

    printf("\nThe content of the first variable is: %d",Object.Var_2);

    return 0;
}
