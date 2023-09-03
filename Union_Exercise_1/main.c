#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        Through "union" structure, show address and data of the
        some variables.
*/

union Test{

    int Var_1;
    float Var_2;

}Number_1; //The address of this section of memory is 407970.

int main()
{
    union Test Number_2; //The address of this section of memory is 61fe1c.
    printf("Hi everyone and welcome to this program!\n");

    //Assign data to the integer variable.
    Number_1.Var_1 = 8;
    printf("\nThe number data of the first variable is: %d",Number_1.Var_1);
    Number_2.Var_2 = 8.5;
    printf("\nThe number data of the second variable is: %.2f",Number_2.Var_2);

    //Show the address of the variables.
    printf("\nThe address of the first variable is: %x", &Number_1.Var_1);



    printf("\nThe address of the first variable is: %x", &Number_2.Var_2);


    return 0;

}
