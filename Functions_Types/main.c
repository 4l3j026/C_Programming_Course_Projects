#include <stdio.h>
#include <stdlib.h>

/*
This is an example of function type,Integer function and return an integer value
*/

//Global Variables.
int Counter_1 = 0;

//Prototype Functions.
void Test_Function1();
void Test_Function2(int x);
int Test_Function3();
int Test_Function4(int Num_1);

//Main function.
int main()
{
    printf("Hello world!\n");
    Test_Function1();
    Test_Function2(8);  // Enter a variable depending of data type
    printf("\nThe definition of function test 1 is: %d", Counter_1);

    return 0;
}

//Function without parameters and return.
void Test_Function1 (){

    Counter_1+=50;

}

//Function with parameters
void Test_Function2 (int x){

    int Operation_Sum = 0;

    Operation_Sum = x + 2;
    printf("The final value is: %d", Operation_Sum);

}

//Function return data, nevertheless does not have parameters
int Test_Function3 (){

    return ;
}

//Function with parameters and return
int Test_Function4 (int Num_1){


    return ;
}
