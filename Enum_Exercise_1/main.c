#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
    Project Description:
        This exercise show the enum function calls some
        some light of traffic.
*/

//Global variables
uint8_t User_Number;

//Prototype functions.
enum Traffic_Light;

//Main function
int main()
{
    printf("Hello everyone and welcome to this program!\n\n");
    printf("Enter a integer number between 1 to 3: ");
    scanf("%d", &User_Number); //Here, it's relevant access to address memory, not variable.

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
        printf("\n\nYour option selected is not valid.\n\n");
        break;

    }

    return 0;
}

enum Traffic_Light{

    Brown,
    Green,
    Orange,
    Red

};
