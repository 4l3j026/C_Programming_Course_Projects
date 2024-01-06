#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> //This library is important to use integer of 8 bits size (uint8_t) unsigned integer.

/*
    Project Description:
        This exercise show the enum function calls some
        some light of traffic.
*/

//Global variables
uint8_t User_Number = 0;

//Enum struct. (Important note: Before the main function.)
enum Traffic_Light{

    Brown, //It's equal to 0.
    Green, //It's equal to 1.
    Orange, //It's equal to 2.
    Red //It's equal to 3.

};

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

