#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        This exercise show the enum function calls some
        some light of traffic.
*/

//Global variables
unsigned char User_Number = 0;

enum {

    Brown,
    Green,
    Orange,
    Red

};

//Main function
int main()
{
    printf("Hello everyone and welcome to this program!\n\n");
    printf("Enter a integer number between 1 to 3: ");
    scanf("%d", &User_Number);

    switch(User_Number){

    case Green:
        printf("\nYour option selected it's Green Traffic Light. ");
    break;

    case Orange:
        printf("\nYour option selected it's Orange Traffic Light. ");
        break;

    case Red:
        printf("\nYour option selected it's Red Traffic Light. ");
        break;

    default:
        printf("\nYour option selected is not valid. ");
        break;

    }

    return 0;
}


