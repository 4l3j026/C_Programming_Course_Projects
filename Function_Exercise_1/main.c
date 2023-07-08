#include <stdio.h>
#include <stdlib.h>
/*
    This is a simple program to know the function types.
    Random
*/
//Global variables.
int Num_1 = 0;
int Num_2 = 0;
int Result = 0;

//Prototype function.
void Sum (); //Function type 1
int Sum_1 (); //Function type 2
void Sum_of_3Numbers (int N1, int N2, int N3); //Function type 3
int Product_of_2Numbers (int Nu_1, int Nu_2); //Function type 4

//Main function.
int main()
{
    printf("Hello world!\n");
    printf("\n--------------------------------------------");
    Sum(); //Call the function.
    printf("\n--------------------------------------------");
    printf("\nThe values of second function: %d", Sum_1()); //Call function to print the return value.
    printf("\n--------------------------------------------");
    Sum_of_3Numbers(100, 100, 100); //Call and enter values.
    printf("\n--------------------------------------------");
    printf("\nThe product between numbers entered is: %d",Product_of_2Numbers(10, 80));
    printf("\n--------------------------------------------");

    return 0;
}

//Develop the function.
/*
    This is a simple function which does not return and has not parameters.
*/
void Sum (){

    printf("\nEnter a first number: ");
    scanf("%d", &Num_1);
    printf("\nEnter a second number: ");
    scanf("%d", &Num_2);
    Result = (Num_1 + Num_2);
    printf("\n\aThe result of the sum is: %d", Result);

}

//Develop the function.
/*
    This is a simple function which return data, but with no parameters.
*/
int Sum_1 (){

    //Local variables.
    int N_1 = 3;
    int N_2 = 7;
    int Res = 0;
    Res = N_1 + N_2;

    return Res;
}

//Develop the function.
/*
    This function has parameters but no return.
*/
void Sum_of_3Numbers(int N1, int N2, int N3){

    int Res = 0;
    Res = N1 + N2 + N3;
    printf("\nThe result of the 3 numbers entered on parameters is: %d", Res);

}

//Develop the function.
/*
    This function has parameters and return.
*/
int Product_of_2Numbers (int Nu_1, int Nu_2){

    int R = 0;
    R = Nu_1 * Nu_2;
    return R;

}

