/*
    Project Description:
    This is a exercise for calculate the square of entered number
    however, without using "pow()" function.

*/
#include <stdio.h>
#include <stdlib.h>

//Prototype function.
long Square ();

//Main function.
int main()
{
    printf("Hello everyone and welcome to this program!\n");
    printf("\n\aThe result is: %ld",Square());

    return 0;
}

//Develop function of square
long Square (void){

    //Local variables.
    int Base = 0;
    int Exponent = 0;
    long Result = 1;

    printf("\nEnter any number to calculate the power: ");
    scanf("%d", &Base);
    printf("\nEnter the exponent of the number: ");
    scanf("%d", &Exponent);

    for(int i = 1; i <= Exponent; i++){

        Result *= Base;

    }

    return Result;

}

