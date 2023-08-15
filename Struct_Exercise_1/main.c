#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        Using struct function show the values of the variables.

*/

//Struct function.
struct Music{

    //Create general variables.
    char Highs[10];
    char Mids[10];
    char Lows[10];

};
//Way to save values inside of the variables.
struct Music Cello = {"A note.", "D & G notes.", "C note."};
struct Music Violin = {"E note.", "A & D notes.", "G note."};

//Main function.
int main()
{
    //Show trough console the Cello notes.
    printf("Hello everyone and welcome to this program!\n");
    printf("The open strings of the cello are: \n");
    printf("\t - The most highest string is: %s \n", Cello.Highs);
    printf("\t - The middle strings are: %s \n", Cello.Mids);
    printf("\t - The most lowest string is: %s \n", Cello.Lows);

    return 0;
}


