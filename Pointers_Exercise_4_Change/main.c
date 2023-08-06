//Adding libraries.
#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        Write a program to change two numbers through
        pointers.
*/
//Prototype Functions.
void User (void);
void Pointers(int x, int y);

//Global variables.
int var1 = 0,var2 = 0;
int *point;

//Main function.
int main()
{
    User();
    Pointers(8, 4);

    return 0;
}

//Develop function of user.
void User(){

    printf("\nHello and welcome everyone to this program.");

}

//Developing function of pointers.
void Pointers (int x, int y){

    printf("\nThe initial value of the first parameter: %d", x);
    printf("\nThe initial value of the second parameter is: %d", y);
    point = &x;
    printf("\n\tThe pointer value is: %d", *point);
    printf("\n\tThe pointer address is: 0x%x", point);

}

