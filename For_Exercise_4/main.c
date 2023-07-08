#include <stdio.h>
#include <stdlib.h>
#define

int main()
{
    //Variables
    int i = 0, Number = 0, Result = 1;
    //Show to console
    printf("Hi everyone and welcome to this code!\n");
    printf("\nEnter an integer to do factorial operation: ");
    scanf("%d", &Number);
    //For structure
    for (i = 1;i <= Number; i++){

        Result = Result * i;

    }

    printf("\nThe result of the factorial operation is: %d", Result);
//    for (i = Number; i >= 1; i--){
//        printf("Hi everyone and welcome to this code!\n");
//    }

    return 0;
}
