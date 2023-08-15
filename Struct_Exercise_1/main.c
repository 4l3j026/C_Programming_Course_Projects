#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        Using struct function show the values of the variables.

*/

//Main function.
int main()
{
    printf("Hello everyone and welcome to this program!\n");
    return 0;
}

//Struct
struct Music{

    char Highs[10];
    char Mids[10];
    char Lows[10];

};
struct Music Cello = {"A note.", "D & G note.", "C note."};
