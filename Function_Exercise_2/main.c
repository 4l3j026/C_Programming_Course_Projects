
/*
    This is the exercise 2 of the course of C language programming:

    - "Calculate square of the numbers from 1 to 5 using a function
    created by user."
*/

#include <stdio.h>
#include <stdlib.h>

//Prototype Functions.
void Square_Function ();

//Main function.
int main()
{
    printf("Hi everyone, and welcome to this C program. \n");
    Square_Function ();
    return 0;
}

//Develop function
void Square_Function (){

    int square = 0;
    for (int i = 1; i <= 5 ; i++){

        square = i * i;
        printf("\nThe square of the current number is: %d", square);
    }
}
